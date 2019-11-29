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

  */
  chaine = realloc(chaine , sizeof(char)* (strlen(chaine) + 5)) ;
  strcat(chaine , ".txt") ;

  FILE *file = fopen(chaine , "a+" ) ;


  char ligne[500] ;

  char precedent[500] ;

  int id_post ;

  while(fgets( ligne ,500,file) != EOF ){
    strcpy(precedent , ligne ) ; }

    sscanf(precedent , "%d" , &id_post);

    return id_post ;

}

#endif

