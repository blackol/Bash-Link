//
//  Header.h
//  Bash-Link
//
//  Created by Anthony Colvil on 23/11/2019.
//  Copyright © 2019 Anthony Colvil. All rights reserved.
//version du 24 nov 00h52

#ifndef Header_h
#define Header_h

// gestion des fichiers pour la sauvegarde______________
 FILE *P_FICHIER; /* pointeur sur FILE */
  char NOM_FICHIER[30], NOM_PERS[30],PRENOM_PERS[30],mdp[30];

  int  C,NB_ENREG;
  int AGE;
char saisieUser;
  const char *a;
int z;





void vog()
{
    
    fscanf(P_FICHIER,"%s\n",mdp);
   
    scanf("%s",&saisieUser);
    z=strcmp( &saisieUser,mdp);
    printf("\n");
    
    
    if (z==0)
    {
        printf("connecté");
        printf("\n");
    }
    else
        {
         printf("erreur mdp");
            printf("\n");
            
        }

}
void neww()
{

    printf("Entrez le new login: ");
    scanf("%s", NOM_FICHIER);
    P_FICHIER = fopen(NOM_FICHIER, "a");  /* write  fopen("m", "a")  "m"/ */
    NB_ENREG=1;
    C = 0;
    while (C<NB_ENREG)
     {
        printf("Entrez le nom de la personne : ");
        scanf("%s", NOM_PERS);
        fprintf(P_FICHIER, "%s\n", NOM_PERS);
        printf("Entrez le prenom de la personne : ");
        scanf("%s", PRENOM_PERS);
        fprintf(P_FICHIER,"%s\n",PRENOM_PERS);
        printf("Votre age : ");
        scanf("%d", &AGE);
        fprintf(P_FICHIER,"%d\n",AGE);
         
         printf("Entrez votre mot de passe : ");
         scanf("%s", mdp);
         fprintf(P_FICHIER, "%s\n", mdp);
         
         
        C=1;
         
     }
    fclose(P_FICHIER);

}

    void see()
{
        printf("consulter : ");
        scanf("%s", NOM_FICHIER);
        
        P_FICHIER = fopen(NOM_FICHIER, "r");  /* read */
        if(C==0)
        { printf("pas d'utlisateur");
            return;
        }
    while (!feof(P_FICHIER))
    {
        fscanf(P_FICHIER, "%s\n", NOM_PERS);
        printf("NOM : %s\n", NOM_PERS);
        fscanf(P_FICHIER,"%s\n",PRENOM_PERS);
        printf("PRENOM : %s\n", PRENOM_PERS);
        fscanf(P_FICHIER,"%d\n",&AGE);
        printf("AGE : %d\n",AGE);
        printf("\n");
        
        fscanf(P_FICHIER,"%s\n",mdp);
        printf("mdp : %s\n",mdp);
        printf("\n");
        C=1;
    }
    fclose(P_FICHIER);
}
    
// page de co _________________________________________________________________________

void affichage_de_connexion(){
//    Création de la page de garde
    printf("-----------------------------------------------------------------------------\n");
    printf("/"); printf("Bienvenue sur Bash Link le reseaux social pour discuter en toute discrétion"); printf("/");
    printf("\n");
     printf("/");printf("\t\t\t\t\t\t\t\t/");
       printf("\n");
    printf("/");printf("\t\t\t\t\t\t\t\t/");
       printf("\n");
    printf("/");printf("\t\t\t\t\t\t\t\t/");
       printf("\n");
    printf("/"); printf("\t S'incrire touche s "); printf("\t\t/");
       printf("\n");
    printf("/");printf("\t\t\t\t\t\t\t\t/");
       printf("\n");
    printf("/"); printf("\tSe Connecter touche d   ") ;printf("\t/");
       printf("\n");
    printf("/");printf("\t\t\t\t\t\t\t\t/");
       printf("\n");
    printf("/");printf("\t\t\t\t\t\t\t\t/");
       printf("\n");
    printf("/");printf("\t\t\t\t\t\t\t\t/");
       printf("\n");
    printf("-----------------------------------------------------------------------------\n");
    }
    
void inscriptionPageinterface (){
    
}

void connecPageinterface(){
    
}
void pageco(){
    char choixco = '\0';
    affichage_de_connexion();
    
    
    switch (choixco) {
        case 's':
            inscriptionPageinterface();
            break;
        case 'd':
            connecPageinterface();
            break;
        default:
            break;
    }
    
}




#endif /* Header_h */
