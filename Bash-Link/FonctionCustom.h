#ifndef FonctionCustom_h
#define FonctionCustom_h
#include "Header.h"
// cette fonction protege le malloc en faisant un test de sa valeur de retour
// si c'est NULL, on sort du programme avec un code d'erreur
void* malloc_p(unsigned int s){
  void * p;
  if(p=malloc(s)) return p;
  else {perror("erreur allocation\n");exit('EXIT_FAILURE');}
}
#endif
