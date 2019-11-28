
#ifndef COMMENT_H
#define COMMENT_H

#include "FonctionCustom.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


// commentaire d'utilisateur
typedef struct comment Comment;
struct comment{
    Comment* last;
    char *comment;
    int id_comment;
    int id_writer ;
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

  return (ListComment *) malloc_p(sizeof(ListComment) ) ;

}

// ajouter des commentaire dans une structure

int ajouterComment(ListComment *list , int id_post , int id_writer , int id_comment , char *comment ){


    if (list == NULL) { return 0 ;

    } else  {

      Comment newComment ;
       
      strcpy(newComment.comment , comment ) ;
       
      newComment.id_post = id_post ;
      newComment.id_writer = id_writer ;
      newComment.next = NULL ;

      newComment.id_comment = id_comment ;

      if (list->tete == NULL) {


    
        list->tete = &newComment ;
        list-> queue = &newComment ;
        newComment.next = NULL ;
        newComment.last = NULL ;


        //saveComment(newComment.id_comment , newComment.id_post , newComment.comment ) ;

        return 1 ;

      }

      /**

      //sauvegarder dans le fichier commentaire
        FILE *fichier = fopen("comment.txt" , "a+") ;

        char chaine[500] ;

        char precedent[500] ;

        int id_comment ;

        while((chaine = fgets(fichier) )!= EOF ){
          strcpy(chaine , precedent) ; }

        sscanf(precedent , "%d" , &id_comment);


        */
        list->queue->next = &newComment ;

        newComment.next = NULL ;
        
        newComment.last = list->queue ;
        
        list-> queue = &newComment ;

        return 1 ; 

        //saveComment(newComment.id_comment , newComment.id_post , newComment.comment ) ;

    }

    // à finir
}


#endif
