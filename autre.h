#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dico.h"
//#include "projet1.h"
#define MAX_CHAR 100

void n_alea(int maxi, int *n) {
  *n = rand() % maxi + 1;
}
int calculer(FILE *file) {
  int counter = 0;
  char *line = malloc(MAX_CHAR * sizeof(char));
  while(fgets(line, MAX_CHAR, file))
  {
    counter++;
  }
  free(line);
  return counter;
}

char *chercher(FILE *file, int n_line)
{
  int counter=0;
  char *mot = malloc(MAX_CHAR * sizeof(char));
  fseek(file, 0, SEEK_SET);
  for(; counter < n_line; counter++)
  {
    mot = fgets(mot, MAX_CHAR, file);
  }
  return mot;
}

void fil_actualiter(/* arguments */) {
  int aleatoire, MAX;
  char fichier[] = "Linke.txt";
  //char fichier2[] = "/home/ruben/Bureau/Proj algo groupe/Linke.txt";
  char *msg = malloc(MAX_CHAR * sizeof(char));
  char *pre = malloc(MAX_CHAR * sizeof(char));
  FILE *fic;
  FILE *fic2;
  srand ( time(NULL) );

  fic = fopen(fichier, "r");
  fic2 = fopen(fichier2, "r");
  MAX = calculer(fic); /* Nombre de lignes du fichier de mots */

  printf("\n\n\t################################################\n");
  n_alea(MAX, &aleatoire); /* Générer un nombre aléatoire entre 1 et le nombre de lignes du fichier */
  msg = chercher(fic, aleatoire); /* Cherche un mot dans le fichier */
  //printf("----------------%s----------------\n", pre); /* Affichage du prenom */
  printf("%s\n", msg); /* Affichage du mot */
  printf("\n\n\t################################################\n");
  n_alea(MAX, &aleatoire); /* Générer un nombre aléatoire entre 1 et le nombre de lignes du fichier */
  msg = chercher(fic, aleatoire); /* Cherche un mot dans le fichier */
  //printf("----------------%s----------------\n", pre); /* Affichage du prenom */
  printf("%s\n", msg); /* Affichage du mot */
  printf("\n\n\t################################################\n");
  n_alea(MAX, &aleatoire); /* Générer un nombre aléatoire entre 1 et le nombre de lignes du fichier */
  msg = chercher(fic, aleatoire); /* Cherche un mot dans le fichier */
  //printf("----------------%s----------------\n", pre); /* Affichage du prenom */
  printf("%s\n", msg); /* Affichage du mot */
  printf("\n\n\t################################################\n");
  fclose(fic);
  //fclose(fic2);
  free(msg);
  //free(pre);

  return 0;
}
//optionnel
void Linker(/* arguments */) {
  /* code */
}

void *Recherche_Pro(Liste *liste,char *y) {
  while(liste!=NULL) {
    if (strcmp(liste->k,y) == 0) {
      return liste; }
      liste=liste->cdr; }
      return NULL;
    }

    void presence(/* arguments */) {
      char abc[50];
      printf("Entrez nom profil");
      scanf("%s",abc);
      if(Recherche_Pro(liste,abc)==NULL) {
        printf("absent\n");}
        else {
          printf("present\n");}
          system("clear");
          printf("Voulez vous afficher ? Y/N\n");
          char a;
          scanf("%s\n",a);
          while (a!='Y'||a!='N') {
            scanf("%s\n",a);
          }
          if (a=='Y') {
            printf("\n\n\t########################\n");
            // Ouvrir FIchier Correpondant
            printf("\n\t########################\n");
          }else{printf("Retour Menu\n");
          super_menu();  }
        }

        void Supprimer_Post(/* arguments */) {
          /* code */
        }

        void Supprimer_Amis(/* arguments */) {
          /* code */
        }

        void Deco(/* arguments */) {
          system("exit");
        }

        void Desinscription(/* arguments */) {
          /* code */
        }
        int super_menu() {
          int choix;
          fil_actualiter();
          printf("\t1> Recherche Utilisateur\n");
          printf("\t2> Informations de son profil\n");
          printf("\t3> Supprimer Posts\n");
          printf("\t4> Supprimer Amis\n");
          printf("\t5> Déconnecter\n");
          printf("\t6> Désinscription\n");
          printf("\t7> Linker\n");

          printf("\t--------\n\t?>");
          scanf("%d", &choix);

          switch (choix) {
            case 1:
            printf("\t1>Ajout etudiant:\n\t?>");
            system("clear");
            return 1;

            case 2:
            printf("\t1> Recherche Utilisateur:\n\t?>");

            return 1;

            default:
            system("clear");
            return 1;
            break;
          }
        }
  }
}
  }
