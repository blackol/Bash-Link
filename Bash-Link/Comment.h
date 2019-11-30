
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
    char  *comment;
    int login_writer[51] ;
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

int ajouterComment(ListComment *list , int id_post , int id_writer  , char *comment ){
    
    
    
    //encore une fonction (^_^)

    if (list == NULL) { return 0 ;

    } else  {

      Comment newComment ;
       
      strcpy(newComment.comment , comment ) ;
       
      newComment.id_post = id_post ;
       
        User *usr  = buildUser(id_writer) ;
        
        if(usr != NULL){ strcpy(newComment.login_writer , usr->login)  ;  }
        
        
        
            
       
        
      
      newComment.next = NULL ;

      

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
    
    }
    


    
    void * getComment(int id_post){
        
         //encore une fonction (^_^)
        
        ListComment *list = initListComment() ;
        
        char ligne[500] , char comment[100]  ;
        int id_comment , id_writer , idpost ;
        
        FILE *file_comment = fopen("comment.txt", "a+") ;
        
        
        while(fgets( ligne ,500,file_comment) != EOF ){
            
            sscanf(ligne, "%d %d %d [^\0]" , &id_comment , &id_writer , &idpost , comment ) ;
            
            if(idpost ==  id_post){
                
                ajouterComment(list, id_post , id_writer  , comment  ) ;
                
            }
            
        }
        
        
        return list
        
    
}


#endif
