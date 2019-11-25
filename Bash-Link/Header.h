//
//  Header.h
//  Bash-Link
//
//  Created by Anthony Colvil on 23/11/2019.
//  Copyright © 2019 Anthony Colvil. All rights reserved.
//version du 24 nov 00h52

#ifndef Header_h
#define Header_h
#include "Post.h"
#include "Interface.h"

// gestion des fichiers pour la sauvegarde______________
 FILE *P_FICHIER; /* pointeur sur FILE */
   

 int  C,NB_ENREG;

 char saisieUser;
 const char *a;
 int z;

 void neww(){

     char NOM_FICHIER[30], NOM_PERS[30],PRENOM_PERS[30],mdp[30],AGE[10];
     printf("Entrez le new login: ");
     scanf("%s", NOM_FICHIER);
     P_FICHIER = fopen(NOM_FICHIER, "a");
     
     NB_ENREG=1;C = 0;

     while (C<NB_ENREG){

           

     printf("Entrez le nom de la personne : ");
         scanf("%s", NOM_PERS);
         fprintf(P_FICHIER, "%s\n", NOM_PERS);
         
     printf("Entrez le prenom de la personne : ");
         scanf("%s", PRENOM_PERS);
         fprintf(P_FICHIER,"%s\n",PRENOM_PERS);
         
     printf("Votre age : ");
         scanf("%s", AGE);
         fprintf(P_FICHIER,"%s\n",AGE);

     printf("Entrez votre mot de passe : ");
         scanf("%s", mdp);
         fprintf(P_FICHIER, "%s\n", mdp);
        
         C=1;

      }
    fclose(P_FICHIER);
 }



 void ee(){
     
     char NOM_FICHIER[30], NOM_PERS[30],PRENOM_PERS[30],mdp[30],AGE[10];
     
     printf("consulter : ");
     scanf("%s", NOM_FICHIER);

     P_FICHIER = fopen(NOM_FICHIER, "r");

     while (!feof(P_FICHIER)){
         
     fscanf(P_FICHIER, "%s", NOM_PERS);
     fscanf(P_FICHIER, "\n");
         printf("NOM : %s\n", NOM_PERS);




         fscanf(P_FICHIER,"%s\n",PRENOM_PERS);
         printf("PRENOM : %s\n", PRENOM_PERS);
         fscanf(P_FICHIER,"%s\n",AGE);
         printf("AGE : %s\n",AGE);
         printf("\n");

         fscanf(P_FICHIER,"%s\n",mdp);
         printf("mdp : %s\n",mdp);
         printf("\n");
         C=1;
     }
     fclose(P_FICHIER);
 }


 void vog(){
     
     char NOM_FICHIER[30], NOM_PERS[30],PRENOM_PERS[30],mdp[30],AGE[10],MDP_TMP[30];
     int z=1;
     printf("LOGIN : ");
     scanf("%s", NOM_FICHIER);

     P_FICHIER = fopen(NOM_FICHIER, "r");
    fgets(NOM_PERS,30,P_FICHIER);
     fgets(PRENOM_PERS,30,P_FICHIER);
     fgets(AGE,30,P_FICHIER);
     fgets(mdp,30,P_FICHIER);
     
     printf("MOT DE PASSE : ");
     scanf("%s",MDP_TMP);
     z=strcmp(mdp,MDP_TMP);

     if (z==10){
             printf("CONNECTER \n");
            
     }
     else{
         printf("ERREUR MOT DE PASSE\n");
         printf("\n");

     }

 }
//oiuytrdrty


// page de co _________________________________________________________________________

void affichage_de_connexion(){
//    Création de la page de garde
    printf("-----------------------------------------------------------------------------\n");
    printf("/"); printf("Bienvenue sur Bash Link le reseaux social pour discuter en toute discrétion"); printf("/");
    printf("\n");
     printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
       printf("\n");
    printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
       printf("\n");
    printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
       printf("\n");
    printf("/"); printf("\t\t\t\t\t\t\t\t S'incrire 1 "); printf("\t\t\t\t\t\t\t\t/");
       printf("\n");
    printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
       printf("\n");
    printf("/"); printf("\t\t\t\t\t\t\t\tSe Connecter 2  ") ;printf("\t\t\t\t\t\t\t/");
       printf("\n");
    printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
       printf("\n");
    printf("/"); printf("\t\t\t\t\t\t\tMots passe oubliez 3   ") ;printf("\t\t\t\t\t\t\t/");
          printf("\n");
    printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
       printf("\n");
    printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
       printf("\n");
    printf("-----------------------------------------------------------------------------\n");
    }
    
void inscriptionPageinterface (){
    
}

void connecPageinterface(){
    
}


void pageco(){
    int choixco=0;
    
    while (choixco!=9) {
        affichage_de_connexion();
        scanf("%d",&choixco);
        
        if (choixco==1) {
            neww();
            ee();
        }
        
        else if (choixco==2) {
            vog();
            superMenu();
        }
        
        else if (choixco==3) {
            printf("pas encore intégrer");
        }
        
        if (choixco==9)
            {
                            }
    }
    
}
// Nouveau code

void INSCRIPTION(){

    char choix1 [ ] = "Quel est le nom de jeune fille de votre mère ?";
    char choix2 [ ] = "Quel est le nom de votre animale de compagnie ?";
    char choix3 [ ] = "Quel est le meilleure systeme d'exploitation ?";
    char choix4 [ ] = "Quel est le nom de votre père ?";
    char choix5 [ ] = "Quel est le nom de votre meilleur ami(e) ?";
    char choix6 [ ] = "Quel est le votre ville natale ?";
    char *TAB_QUES [7] = {choix1,choix2,choix3,choix4,choix5,choix6};

    char LOGIN[30],NOM[30],PRENOM[30],AGE[10],MDP[30],REPONSE1[100],REPONSE2[100];
    int nb1=0,nb2=0,ID=0;

    FILE *fichier = NULL;

    fichier = fopen("User","a+");

    fgets(NOM,30,fichier);
    fprintf(fichier, "%s ",ID);

    printf("CHOISISSEZ UN LOGIN : ");
    scanf("%s", LOGIN);
    fprintf(fichier, "%s ",LOGIN);

    printf("Entrez le nom de la personne : ");
    scanf("%s", NOM);
    fprintf(fichier, "%s ", NOM);
         
    printf("Entrez le prenom de la personne : ");
    scanf("%s", PRENOM);
    fprintf(fichier,"%s ",PRENOM);
         
    printf("Votre age : ");
    scanf("%s", AGE);
    fprintf(fichier,"%s ",AGE);

    printf("Entrez votre mot de passe : ");
    scanf("%s",MDP);
    fprintf(fichier, "%s ",MDP);

   
    for(int i=0;i<6;i++){
        printf("CHOIX %d :%s\n",i+1,TAB_QUES[i]);
    }
    printf("CHOISISSEZ UNE QUESTION : ");
    scanf("%d",&nb1);
    while(nb1<0 || nb1 >6){
        printf("CHOISISSEZ UNE QUESTION ENTRE 1 ET 6: ");
        scanf("%d",&nb1);
    }
    printf("LA QUESTION EST : %s\n",TAB_QUES[nb1-1]);
    fprintf(fichier, "%d ",nb1-1);
    printf("QUELLE EST VOTRE REPONSE : ");
    scanf("%s",REPONSE1);
    fprintf(fichier, "%s ",REPONSE1);


    for(int i=0;i<6;i++){
        if(i != (nb1-1)){
            printf("CHOIX %d :%s\n",i+1,TAB_QUES[i]);
        }
    }
    printf("CHOISISSEZ UNE AUTRE QUESTION : ");
    scanf("%d",&nb2);
    while(nb2<0 || nb2 >6 && nb1 != nb2){
        printf("\nCHOISISSEZ UNE QUESTION ENTRE 1 ET 6 ET DIFFERENTE DE LA PREMIERE : ");
        scanf("%d",&nb2);
    }
    printf("LA QUESTION EST : %s",TAB_QUES[nb2-1]);
    fprintf(fichier, "%d ",nb2-1);
    printf("\nQUELLE EST VOTRE REPONSE : ");
    scanf("%s",REPONSE2);
    fprintf(fichier, "%s\n",REPONSE2);
   
    fclose(fichier);
    MENU();
 }



 void AFFICHER(){
     
    char NOM_FICHIER[30], NOM_PERS[30],PRENOM_PERS[30],mdp[30],AGE[10];
    FILE *fichier = NULL;
    printf("ENTREZ LE LOGIN RECHERCHER : ");
    scanf("%s", NOM_FICHIER);

    fichier = fopen(NOM_FICHIER, "r");

    while (!feof(fichier)){
         
    fscanf(fichier, "%s", NOM_PERS);
    fscanf(fichier, "\n");
        printf("NOM : %s\n", NOM_PERS);




        fscanf(fichier,"%s\n",PRENOM_PERS);
        printf("PRENOM : %s\n", PRENOM_PERS);
        fscanf(fichier,"%s\n",AGE);
        printf("AGE : %s\n",AGE);
        printf("\n");

        fscanf(fichier,"%s\n",mdp);
        printf("mdp : %s\n",mdp);
        printf("\n");
        
    }
    fclose(fichier);
}


void CONNEXION(){
    char LOGIN[30],NOM[30],PRENOM[30],AGE[10],MDP[30],MDP_TMP[30];
    int ESSAI =0,VERIF=0,ID=0;
    FILE *fichier = NULL;
    fichier = fopen("User","r");
    
    printf("ENTREZ VOTRE LOGIN : ");
    scanf("%s", LOGIN[);
   
    
    while(!fichier && ESSAI<3){
        printf("AUCUN UTILISATEUR ENREGISTRER AVEC LE LOGIN :%s.\n",NOM_FICHIER);
        printf("VERIFIER L'ORTHOGRAPHE OU CRÉE UN COMPT SI C'EST PAS DEJA FAIT.\n");
        printf("APRES 3 ESSAI VOUS SEREZ AUTOMATIQUEMENT REDIRIGER VERS LE MENU.\n");
        
        printf("ENTREZ VOTRE LOGIN : ");
        scanf("%s", NOM_FICHIER);
        fichier = fopen(NOM_FICHIER, "r");
        ESSAI+=1;
    }
    if (ESSAI==3){MENU();}
    fgets(LOGIN,30,fichier);
    fgets(NOM,30,fichier);
    fgets(PRENOM,30,fichier);
    fgets(AGE,30,fichier);
    fgets(MDP,30,fichier);
     
    printf("MOT DE PASSE : ");
    scanf("%s",MDP_TMP);

    printf("%s\n",MDP);
    printf("%s\n",MDP_TMP );
    
    if (strcmp(MDP,MDP_TMP)){
        SUPER_MENU();
            
    }
    else{
        printf("ERREUR MOT DE PASSE\n");
        printf("\n");
    }

}


void EN_TETE(){
    printf("\n\n-----------------------------------------------------------------------------\n");
    printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
    printf("-----------------------------------------------------------------------------\n\n");
}





void INTERFACE(int etat){
    EN_TETE();

    if (etat==0){
       printf("Bienvenue sur Bash Link le reseaux social pour discuter en toute discrétion\n\n");

       printf("\t\t\tSe connecter : 1  \n");
       printf("\t\t\tS'incrire    : 2  \n");
       printf("\n");
       printf("\t\t\tQuitter      : 3  \n");
    }

    if (etat==1){
        printf("----------------------------------CONNEXION----------------------------------\n\n");
    }

    if (etat==3){
        printf("------------------   FERMETURE DE BASH-LINK A BIENTOT :)   ------------------\n");
    }
    if (etat<0 || etat >3){
        printf("------------------   VEULLEZ BIEN LIRE LES INSTRUCTIONS :)   ----------------\n");
    }
    EN_TETE();
}

void SUPER_MENU(){
    EN_TETE();
    EN_TETE();

}


void MENU(){
    int ETAT=0;

    while (ETAT>=0 && ETAT<3){
        system ("clear");
        INTERFACE(ETAT);
        scanf("%d",&ETAT);
        system ("clear");

        // CONNEXION
        if (ETAT==1){
            INTERFACE(ETAT);
            CONNEXION();
            system ("clear");
        }

            // INSCRIPTION
        if (ETAT==2){
            INSCRIPTION();
            system ("clear");
        }

            // FERMETURE
        if (ETAT==3){
            INTERFACE(ETAT);
        }

        // ERREUR SAISIE
        if (ETAT<0 || ETAT >3){
            INTERFACE(ETAT);
            MENU();
        }
    }
    
}







#endif /* Header_h */
