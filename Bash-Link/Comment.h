
#ifndef Comment_h
#define Commen_h

#include "FonctionCustom.h"


// commentaire d'utilisateur
typedef struct comment Comment;
struct comment{
    Comment* last;
    char *comment;
    int id_comment;
    int id_post ;
    Comment *next;
};

// Structure de Contrôle des commentaire
typedef struct ListComment ListComment  ;
struct ListComment {
    Post *tete ;
    Post *queue ;
    int nb_Post ; ;
};

ListComment initListComment(void){

  return liste = malloc_p(sizeof(ListPost) ) ;

}


int ajouterComment(ListComment *list , Post *post , char *comment ){


    if (list == NULL) { return 0 ;

    } else  {

      Comment newComment ;

      newComment.comment = comment ;
      newComment.id_post = post->id_post ;
      newComment.next = NULL ;

      if (list->tete == NULL) {

        newComment.id_comment = 0 ;
        newComment.last = list->queue ;
        list->tete = &newComment ;
        list-> queue = &newComment ;


        saveComment(newComment.id_comment , newComment.id_post , newComment.comment ) ;

        return 1 ;

      }

        FILE *fichier = fopen("comment.txt" , "a+") ;

        char chaine[500] ;

        char precedent[500] ;

        int id_comment ;

        while((chaine = fgets(fichier) )!= EOF ){
          strcpy(chaine , precedent) ; }

        sscanf(precedent , "%d" , &id_comment);

        newComment.id_comment = id_comment++ ;

        list->queue->next = &newComment ;

        newComment.next = NULL ;

        list-> queue = &newComment ;

        saveComment(newComment.id_comment , newComment.id_post , newComment.comment ) ;

    }






}


#endif
