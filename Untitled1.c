#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// cette fonction protege le malloc en faisant un test de sa valeur de retour
// si c'est NULL, on sort du programme avec un code d'erreur
void* malloc_p(unsigned int s){
  void * p;
  if(p=malloc(s)) return p;
  else {perror("erreur allocation\n");exit(EXIT_FAILURE);}
}

typedef struct _elt{
  char clef[128]; //en dur et statiquement, idéalement devrait être dynamique
  // on peut mettre d'autres champs aussi
  char *nom;

  struct _elt *suivant;
}Element;

//pas de structure de controle (c'est un peu plus dur a suivre qu'avec)
// le typedef est la pour eviter les **
typedef Element* Liste;

typedef struct{
  Liste *table;
  int taille;
}Table;

/////////////////////////////////////////////////////////////////////////
// fonctions de gestion des listes
/////////////////////////////////////////////////////////////////////////
//Ajouter en tete de liste : facile
//Eventuellement ajouter un test pour savoir si l'element n'existe pas déjà
void ajouterListe(Liste *l,char *clef){
  // il faut un nouvel element
  Element *element = (Element*)malloc_p(sizeof(Element));
  strcpy(element->clef,clef);
  // attention, il faut suivre : l est l'adresse de la liste,
  // *l est la référence sur le premier élément (NULL si la liste est vide)
  element->suivant=*l;
  *l = element;
}
// chercher si un element est présent dans la liste (renvoi 1 si oui, 0 sinon)
// facile aussi !
// pas absolument besoin du passage par référence
// ( on le fait pour la cohérence avec les autres fonctions)
// (et les elements peuvent avoir plusieurs champs, dans ce cas
// le passage par référence est plus efficace)
// en realite il faudrait renvoyer un element ou NULL
int chercherListe(Liste *l,char *clef){
  Element *element=*l;
  while(element)
    if(!strcmp(element->clef,clef)) return 1; // trouvé
    else element = element->suivant;

  // pas trouvé
  return 0;
}
// supprimer un element donné par sa clef
// plus difficile : 3 cas a gerer !
// NB : marche aussi quand la clef n'est pas dans la liste
void supprimerListe(Liste *l,char *clef){
  Element *element=*l;
  // la liste est vide : rien a faire
  if(!element) return;
  // il faut gérer le cas ou l'element a supprimer est en tete
  if(!strcmp(element->clef,clef)){
    *l = element->suivant;
    free(element);
    return;
  }
  // cas general
  while(element->suivant){
    if(!strcmp(element->suivant->clef,clef)){
      Element *tmp = element->suivant;
      element->suivant = element->suivant->suivant;
      free(tmp);
    }
    element = element->suivant;
  }
  return;
}

/////////////////////////////////////////////////////////////////////////
// fonction de hashage : djb2
/////////////////////////////////////////////////////////////////////////
unsigned long hash(unsigned char *str){
  unsigned long hash = 5381;
  int c;
  while (c = *str++)
    hash = ((hash << 5) + hash) ^ c; /* hash * 33 + c */
  return hash;
}

/////////////////////////////////////////////////////////////////////////
// fonctions de gestion de la table
// 3 fonctions de base : ajouter,chercher,supprime
// + 1 fonction d'init
/////////////////////////////////////////////////////////////////////////
// fonction d'init
Table * initTable(){
  Table *th = (Table*)malloc_p(sizeof(Table));
  // la taille est arbitrairement fixée à 3001
  th->taille = 3001;
  // allocation de la table de listes
  th->table = (Liste*)malloc_p(sizeof(Liste)*th->taille);
  // initialisation des listes
  for(int i=0;i<th->taille;i++)
    th->table[i] = NULL;

  return th;
}
//ajout d'une clef
// afaire : les verifications d'existence de la table
void ajouterTable(Table *th,char *clef){
  ajouterListe(th->table+(hash(clef)%th->taille),clef);
}
//la recherche d'une clef
// afaire : les verifications d'existence de la table
// en realite il faudrait renvoyer un element ou NULL
int chercherTable(Table *th,char *clef){
  return chercherListe(th->table+(hash(clef)%th->taille),clef);
}
//suppression d'une clef
// afaire : les verifications d'existence de la table
void supprimerTable(Table *th,char *clef){
  supprimerListe(th->table+(hash(clef)%th->taille),clef);
}

/////////////////////////////////////////////////////////////////////////
// fonctions annexes
/////////////////////////////////////////////////////////////////////////
// affichage de la table
void afficherListe(Liste *l){
  Element  *e = *l;
  while(e){
    printf("%s\n",e->clef);
    e = e->suivant;
  }
}

void afficherTable(Table *th){
  for(int i =0;i<th->taille;i++)
    if(th->table[i]){
      printf("%d :\n",i);
      afficherListe(th->table + i);
    }
}

// destruction de la table
void detruireListe(Liste *l){
  Element *e = *l;
  while(e){
    Element *t = e;
    e = e->suivant;
    free(t);
  }
  *l = NULL;
}
void detruireTable(Table *th){
  for(int i =0;i<th->taille;i++) detruireListe(th->table + i);
  free(th->table);
  free(th);
}

unsigned int longueurListe(Liste * l){
  Element *e = *l;
  unsigned int n = 0;
  while(e){ n++; e = e->suivant;}
  return n;
}

unsigned int tauxOccupation(Table *th){
    unsigned int n = 0;
    for(int i =0;i<th->taille;i++)
      if(th->table[i]) n++;
    return n;
}
float longueurMoyenne(Table *th){
    unsigned int n = 0;
    for(int i =0;i<th->taille;i++)
      if(th->table[i]) n += longueurListe(th->table + i);
    return n/(float)tauxOccupation(th);
}

/////////////////////////////////////////////////////////////////////////
 int main(){
   Table *table1;


   char chaine1[128] = "clergue";


   table1 = initTable();
   printf("**** AJOUT ****\n");
   ajouterTable(table1,"clergue");
   printf("taux d'occupation : %d\n",tauxOccupation(table1));
   ajouterTable(table1,"manuel");
   afficherTable(table1);
   printf("taux d'occupation : %d\n",tauxOccupation(table1));


   printf("**** RECHERCHE ****\n");
   strcpy(chaine1,"clergue");
   printf("la chaine %s est presente ? : %d\n",chaine1,chercherTable(table1,chaine1));
   strcpy(chaine1,"toto");
   printf("la chaine %s est presente ? : %d\n",chaine1,chercherTable(table1,chaine1));

   printf("**** SUPPRESSION ****\n");
   supprimerTable(table1,"manuel");
   afficherTable(table1);

   printf("**** AJOUT INTENSIF ****\n");
   for(int i=0;i < 1000;i++){
     int k = rand()%100;
     for(int j = 0;j<k;j++) chaine1[j]= 'a' + rand()%25;
     chaine1[k]='\0';
     ajouterTable(table1,chaine1);
   }

   printf("taux d'occupation : %d  ---- longueur moyenne des listes : %f\n",tauxOccupation(table1),longueurMoyenne(table1));

   printf("**** AJOUT INTENSIF 2****\n");
   for(int i=0;i < 10000;i++){
     int k = rand()%100;
     for(int j = 0;j<k;j++) chaine1[j]= 'a' + rand()%25;
     chaine1[k]='\0';
     ajouterTable(table1,chaine1);
   }

   printf("taux d'occupation : %d  ---- longueur moyenne des listes : %f\n",tauxOccupation(table1),longueurMoyenne(table1));
   printf("cela veut dire que les opérations chercher et supprimer prendront en moyenne %f iterations\n",longueurMoyenne(table1));
   printf("au lieu de 11000/2 (ajout reste en O(1))\n");



   detruireTable(table1);

   return 0;
 }

// ameliorations a apporter :
// -les elements sont plus complexes (champ en plus de la clef)
// -la fonction chercher doit renvoyer un element (Element*)
// -croissance de la taille du tableau si le nombre d'elements devient important
//
// Et sinon :
// ce code fonctionne pour les dictionnaires à clefs de type chaine de caractères
// pour les clefs entières prevoir une autre fonction de hachage comme :
// h(k) = partie_entiere(m*(partie_decimale(k * A))
// avec m : taille de la table
// A : (sqrt(5) - 1)/2 = 0.6180339887 ...
// d'après D. Knuth, cette valeur fonctionne bien (et il faudrait être vriament sur de soi
// pour contredire Knuth ...
