#ifndef Interface_h
#define Interface_h
#include "Header.h"
#include "Load.h"
#include "Post.h"
#include "FonctionCustom.h"

// copyright by G3
void affichageSupermenu(){
    printf("-----------------------------------------------------------------------------\n");
      printf("/"); printf("Bash-Link made in G3 in fouillole (Des étudiant sont morts )"); printf("\t\t\t\t/");
      printf("\n");
       printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
    printf("/"); printf("\t\t\t\t\t\t");printf("1 afficher le fils d'actualié") ;printf("\t\t\t\t\t\t/");
         printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
    printf("/"); printf("\t\t\t\t\t\t\t");printf("2 Faire une recherche ") ;printf("\t\t\t\t\t\t\t/");
         printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
      printf("/"); printf("\t\t\t\t\t\t\t"); printf("3 Sugetion d'amis");printf("\t\t\t\t\t\t\t/");
            printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
    printf("/"); printf("\t\t\t\t\t\t");printf("1 afficher Post utilisateur") ;printf("\t\t\t\t\t\t/");
            printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
      printf("-----------------------------------------------------------------------------\n");
}
// affichage du menu graphique
void affichageselectsupermenu1(){
    printf("-----------------------------------------------------------------------------\n");
      printf("/"); printf("Bash-Link made in G3 in fouillole (Des étudiant sont morts )"); printf("\t\t\t\t/");
      printf("\n");
       printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
    printf("/"); printf("\t\t\t\t\t\t");printf("1 actu suivant") ;printf("\t\t\t\t\t\t/");
    printf("\n");
    printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
    printf("\n");
    printf("/"); printf("\t\t\t\t\t\t");printf("2 actu précedent") ;printf("\t\t\t\t\t\t/");
    printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
    printf("/"); printf("\t\t\t\t\t\t\t"); printf("9 Quittez");printf("\t\t\t\t\t\t\t/");
    printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
      printf("-----------------------------------------------------------------------------\n");
}

void affichageselectsupermenupost(){
    printf("-----------------------------------------------------------------------------\n");
      printf("/"); printf("Bash-Link made in G3 in fouillole (Des étudiant sont morts )"); printf("\t\t\t\t/");
      printf("\n");
       printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
    printf("/"); printf("\t\t\t\t\t\t");printf("1 afficher post") ;printf("\t\t\t\t\t\t/");
    printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
    printf("/"); printf("\t\t\t\t\t\t");printf("2 ajouter un post") ;printf("\t\t\t\t\t\t/");
         printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
    printf("/"); printf("\t\t\t\t\t\t\t");printf("2 modifier un post ") ;printf("\t\t\t\t\t\t\t/");
         printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
      printf("/"); printf("\t\t\t\t\t\t\t"); printf("4 supprimer un post");printf("\t\t\t\t\t\t\t/");
            printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
    printf("/"); printf("\t\t\t\t\t\t\t"); printf("9 Quittez");printf("\t\t\t\t\t\t\t/");
    printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
      printf("-----------------------------------------------------------------------------\n");
}









// super menu toute les fonction du duper menu son à faire

void AfficherActu(ListPost *list){
    
    //Aller !! une fonction de plus (^_^)
  
    Post *p = list->tete ;
    int n , continuer = 1 ;
    
    while(continuer){
        
        
        printf("Navigation :\n 1 -> actu suivant\n 2 -> actu précedent\n 3 -> retour \n");
               scanf("%d",&n);
               if(n==1){
                if(p->next) p = p->next;
               printf("Post : \n %s\n",p->post);
               
               } else if(n == 2){
                   
                   if(p->last) p = p->last ;
                  printf("Post : \n %s\n",p->post);
               
               }else if(n ==  3){
                   
                   continuer  = 0 ;
                   
                   
               }else {
                   
                   printf("Erreur , veuillez saisir un chiffre valide\n ");
               }
    }
}


void AfficherPost(ListPost *list ){
    
    //Pour cette fonction c'est encore moi  (^_^)

    Post *p = list->tete ;
    int n , continuer = 1 ;
    
    while(continuer){
        
        
        printf("Navigation :\n 1 -> Post suivant\n 2 -> Post précedent \n 3 -> retour \n");
               scanf("%d",&n);
               if(n==1){
                if(p->next) p = p->next;
               printf("Post : \n %s\n",p->post);
               
               } else if(n == 2){
                   
                   if(p->last) p = p->last ;
                  printf("Post : \n %s\n",p->post);
               
               }else if(n ==  3){
                   
                   continuer  = 0 ;
                   
                   
               }else {
                   
                   printf("Erreur , veuillez saisir un chiffre valide\n ");
               }
    }
       
}


void afficherUser(ListUser *list){
    
    // Poouuuurrrrqqqquuuooooiiiii mooiiii (^_^)
    
    User *p = list->tete ;
    int n , continuer = 1 ;
    
    while(continuer){
    
    //printf("Navigation :\n 1 -> Voir une Autre Sugestion \n 2 -> Voir la Sugestion précédente \n 3 -> Quiter \n");
     printf("Résultat:\n 1->Voir un autre résultat \n 2-> Voir le résultat précedent \n 3-> Quiter \n")
    
        scanf("%d",&n);
               if(n==1){
                if(p->next) p = p->next;
               printf("Résultat :\n login : %s  \n nom : %s\n prenom : %s \n age : %d ",p->login , p->nom , p->prenom , p->age);
               
               } else if(n == 2){
                   
                   if(p->last) p = p->last ;
                  printf("Résultat :\n login : %s  \n nom : %s\n prenom : %s \n age : %d ",p->login , p->nom , p->prenom , p->age);
               
               }else if(n ==  3){
                   
                   continuer  = 0 ;
                   
                   
               }else {
                   
                   printf("Erreur , veuillez saisir un chiffre valide\n ");
               }
    }
    
    
    }



void superMenu(int id){
    int choix = 0,choixsuperm=0,choie=0;
    affichageSupermenu();
    scanf("%d",&choix);

    if (choix==1) {
//        fils d'actualité
        while (choie!=9) {
            affichageselectsupermenu1();
            ListPost *List_fil_actu = loadFilActu(id) ;
            AfficherActu(List_fil_actu) ;
        }
        
    }
    if (choix==2) {
        printf("Recherche : \n");
         char recherche[100] ;
        
        gets(recherche) ;
        
        
        ListUser *list  = chercherUser(recherche);
        
        afficherUser(list) ; 
        
        
        
        
//        Editor place
    }
    if (choix==3) {
        printf("Suggestion d'amis");
    }
    char a[10000000];
    if (choix==4) {
        printf("post");
        while (choixsuperm!=9) {
            scanf("%d",&choixsuperm);
             affichageselectsupermenupost();
            if (choixsuperm==1) {
                
                ListPost *ListPost = loadPost(id) ;
                AfficherPost(ListPost) ;
                
            }
            if (choixsuperm==2) {
                printf("ajouterPost");
                printf("Entrez le post");
                scanf("%s",a);
                int idpost = dernier_id("post");
                idpost++ ;
                ajouterPost(&list, id, idpost, a);
            }
            if (choixsuperm==3) {
                printf("modifPost");
                printf("Entrez le post");
                scanf("%s",a);
                modifierPost(&list, id,a);
            }

            if (choixsuperm==4){
                printf("suppPost");
                supprimerPost(&list,id, a);
            }
        }
    }
    // copyright by G3
}
#endif
// copyright by G3
// copyright by G3
// copyright by G3
