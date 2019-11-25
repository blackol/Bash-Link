#include <string.h>

// cette fonction protege le malloc en faisant un test de sa valeur de retour
// si c'est NULL, on sort du programme avec un code d'erreur
void* malloc_p(unsigned int s){
  void * p;
  if(p=malloc(s)) return p;
  else {perror("erreur allocation\n");exit(EXIT_FAILURE);}
}

int dernier_id(char *chaine){
/**

passer le nom du fichier en paramètre sans le ".txt"

*/
  chaine = realloc(chaine , sizeof(char)* (strlen(chaine) + 4)) ;
  strcat(chaine , ".txt") ;

  FILE *file = fopen(chaine , "a+" ) ;


  chaine[500] ;

  precedent[500] ;

  int id_post ;

  while((chaine = fgets(file) )!= EOF ){
    strcpy(chaine , precedent) ; }

    sscanf(precedent , "%d" , &id_post);

    return id_post ;

}
