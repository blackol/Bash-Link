#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FonctionCustom.h"

// sauvegarde des post
int savePost( int id_post , int id_post_writer , char *post ){

    //les id sont stocké sur 3 caractères


    char chaine[500] ;

    FILE  *file =  fopen("post.txt" , "a+") ;
    if(file == NULL) { return 0 ; }

    if (id_post < 10  && (id_post_writer < 10   ) {
      fprintf(chaine, "00%d 00%d", id_post , id_post_writer );
    }

    if ( (id_post < 100  && id_post > 10  ) && (id_post_writer < 100 && id_post_writer > 10 ) ) {
      fprintf(chaine, "0%d 0%d", id_post , id_post_writer );
    }


    if ((id_post < 10   ) && (id_post_writer > 100) {
      fprintf(chaine, "00%d %d", id_post , id_post_writer );
    }


    if ((id_post > 100   ) && id_post_writer < 10) {
      fprintf(chaine, "%d 00%d", id_post , id_post_writer );
    }

    if ((id_post > 10 && id_post < 100  ) && (id_post_writer < 100 &&  id_post_writer > 10 )  ) {
      fprintf(chaine, "0%d 0%d", id_post , id_post_writer );
    }

    if ((id_post > 100   ) && id_post_writer > 100) {
      fprintf(chaine, "%d %d", id_post , id_post_writer );
    }

    if ((id_post > 10 && id_post < 100 ) && id_post_writer < 10 ) {
      fprintf(chaine, "0%d 00%d", id_post , id_post_writer );
    }

    if (id_post < 10 && (id_post_writer > 10 &&  id_post_writer < 100) ) {
      fprintf(chaine, "00%d 0%d", id_post , id_post_writer );
    }


    strcat(chaine , post ) ;

    fputs(chaine , file ) ;

    fclose(file) ;
}

// à finir 
int saveComment(int id_comment , int id_post , int id_writer , char *comment){

    //les id sont stocké sur 3 caractères

    char chaine[500] ;
    char id1[4] ,id2[4] ,id3[4] ;

    FILE *file = fopen("comment.txt" , "a+") ;

    if( file == NULL){return 0 ;}

    if(id_comment < 10){

      id1[0] ='0' ;
      id1[1] = '0' ;
      id1[2] = ''

    }


}
