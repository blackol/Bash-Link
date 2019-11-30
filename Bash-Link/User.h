#ifndef User_h
#define User_h

#include "FonctionCustom.h"

//Structure des utilisateur
typedef struct User User;
struct User {
    User * last;
    char login[51];
    int id ;
    //char motsPasse[51];
    char nom[51];
    char prenom[51];
    int age;
    User * next;
};

//Structure de controle des utilisateurs
typedef struct ListUtilisateur ListUser ;
struct ListUtilisateur {
    User *tete ;
    User *queue ;
    int nb_user ;
};


void * initListUser(void){ return (ListUser *) malloc_p(sizeof(ListUser)) ;  }

void ajouterUser( ListUser *l   ,char *nom , char *prenom , char *login , int age ){
    
    
    User usr ;
    
    strcpy(usr.login , login) ;
           
    strcpy(usr.nom , nom) ;
        
    strcpy(usr.prenom , prenom) ;
           
    usr.age  = age ;
    
    l-> nb_user ++ ;
    
    if(l->tete){
        
        l-> tete  =  &usr ;
        
        l-> queue =  &usr ;
        
        usr.last =  NULL ;
        
        usr.next = NULL ;
        
        
    } else {
        
        
        usr.next  = NULL ;
        usr.last  =  l->queue ;
        l->queue->next = &usr ;
        
        l->queue =  &usr ;
        
    }
}


ListUser * chercherUser(char *recherche){

  
ListUser *l =  initListUser();
    
  //à finir
    FILE *file;
    file = fopen("User.txt" , "a+");
  char ligne[500] ;
  int age , id ;
  char nom[51];
  char prenom[51] ;
  char login[51] ;
  
  while ( fgets(ligne , 500 ,file)!= EOF) {
     sscanf(ligne , "%d %d %s %s %s", &id, &age , nom ,prenom , login  ) ;
     if( (strcmp(recherche , nom) == 0 ) || (strcmp(recherche , prenom) == 0) || (strcmp(recherche , login) == 0) ){

         
         ajouterUser(l ,nom ,prenom ,login ,age) ;

       
     }

  }
    fclose(file) ;
    return l ;

}


#endif
