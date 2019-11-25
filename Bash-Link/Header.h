//
//  Header.h
//  Bash-Link
//
//  Created by Anthony Colvil on 23/11/2019.
//  Copyright © 2019 Anthony Colvil. All rights reserved.
//version du 24 nov 00h52

#ifndef Header_h
#define Header_h
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




#endif /* Header_h */
