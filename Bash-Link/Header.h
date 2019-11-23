//
//  Header.h
//  Bash-Link
//
//  Created by Anthony Colvil on 23/11/2019.
//  Copyright © 2019 Anthony Colvil. All rights reserved.
//

#ifndef Header_h
#define Header_h

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
