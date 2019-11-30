#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef FonctionCustom_h
#define FonctionCustom_h
#include "Header.h"


// cette fonction protege le malloc en faisant un test de sa valeur de retour
// si c'est NULL, on sort du programme avec un code d'erreur
void* malloc_p(unsigned int s){
    void * p = NULL;
    if(p==malloc(s)) return p;
  else {perror("erreur allocation\n");exit('EXIT_FAILURE');}
}


int dernier_id(char *chaine){
  /**

  passer le nom du fichier en paramètre sans le ".txt"
   
    peut importe l'ordre des id dans le fichier txt sa fonctionne !!!! (^_^)

  */
  chaine = realloc(chaine , sizeof(char)* (strlen(chaine) + 5)) ;
  strcat(chaine , ".txt") ;

  FILE *file = fopen(chaine , "a+" ) ;


  char ligne[500] ;

  char precedent[500] ;

  int id_rendre = 0 ,  id_bidon ;

  while(fgets( ligne ,500,file) != EOF ){
    strcpy(precedent , ligne ) ;
      
      sscanf(precedent, "%d" , &id_bidon) ;
      
      if(id_bidon > id_rendre){
          
          id_rendre = id_bidon ;
      }
  }


    return id_rendre ;

}


int getId(char *login){
    
    
    FILE *file = fopen("user.txt" , "a+" ) ;
    
    char ligne[500] , precedent[500] , nom[51] , prenom[51] ;
     
    char chaine[51] ;

    int id_user = -1 , age , id_bidon ;

    while(fgets( ligne ,500,file) != EOF ){
      strcpy(precedent , ligne ) ;
        
    sscanf(precedent , "%d %d %s %s %s" , &id_bidon ,&age , nom , prenom , chaine ) ;
        
        if( strcmp(chaine , login) == 0 ){
            
            id_user = id_bidon ;
            
            
        }
    
        
    }
    
    
    return id_user ;
    
}

#endif

