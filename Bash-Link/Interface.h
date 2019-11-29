#ifndef Interface_h
#define Interface_h
#include "Header.h"
#include "Load.h"
#include "Post.h"
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

int AfficherActu(){

    ListPost *pointer = initListPost();
//     pointer->tete;
    
    char post;
    int n,*p;
    if(pointer->tete==NULL){
    return 0;
    }
    else{
        pointer->post = post;
        return 1;
    }
    printf("Entrez un entier 1 actu suivant  ou actu précedent 2\n");
    scanf("%d",&n);
    if(n==1){
    pointer->next;
    printf(":%s\n",pointer->next)
    }
    if(n==2){
        pointer->last;
    }
    pointer->post;
    printf("Les donnees sont:%s\n",p->post);
}


int AfficherPost(){

    ListPost *pointer = initListPost();
//     pointer->tete;
    
    char post;
    int n,*p;
    if(pointer->tete==NULL){
    return 0;
    }
    else{
        pointer->post = post;
        return 1;
    }
    printf("Entrez un entier 1 actu suivant  ou actu précedent 2\n");
    scanf("%d",&n);
    if(n==1){
    pointer->next;
    printf(":%s\n",pointer->next)
    }
    if(n==2){
        pointer->last;
    }
    pointer->post;
    printf("Les donnees sont:%s\n",pointer->post);
}





















void superMenu(int IDutilisateur){
    int choix = 0,choixsuperm=0,choie=0;
    affichageSupermenu();
    scanf("%d",&choix);

    if (choix==1) {
//        fils d'actualité
        while (choie!=9) {
            affichageselectsupermenu1();
            AfficherActu();
        }
        
    }
    if (choix==2) {
        printf("Recherche");
        chercherUser();
        
    }
    if (choix==3) {
        printf("Suggestion d'amis");
    }
    if (choix==4) {
        printf("post");
        while (choixsuperm!=9) {
            scanf("%d",&choixsuperm);
             affichageselectsupermenupost();
            if (choixsuperm==1) {
                 printf("afficherPost");
                 AfficherPost();
            }
            if (choixsuperm==2) {
                printf("ajouterPost");
                loadPost();
            }
            if (choixsuperm==3) {
                printf("modifPost");
                 modifierPost();
            }

            if (choixsuperm==4){
                printf("suppPost");
                supprimerPost();
            }
        }
    }
    // copyright by G3
}
#endif
// copyright by G3
// copyright by G3
// copyright by G3
