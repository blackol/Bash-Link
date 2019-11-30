#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FonctionCustom.h"

// sauvegarde des post
int savePost( int id_post , int id_post_writer , char *post ){

    //les id sont stocké sur 3 caractères


    char chaine[500] , id1[4] , id2[4]  ;
    

    FILE  *file =  fopen("post.txt" , "a+") ;
    if(file == NULL) { return 0 ; }
    
    
    
    if(id_post < 10){ sprintf(id1 ,"00%d" , &id_post ) ; }
        
    if(id_post > 10 && id_post < 100 ){ sprintf(id1 ,"0%d" , &id_post ) ; }
        
    if(id_post >= 100){ sprintf(id1 ,"%d" , &id_post ) ; }
    
    
    
    
    
    if(id_post_writer < 10){ sprintf(id2 ,"00%d" , &id_post_writer ) ; }
           
    if(id_post_writer > 10 && id_post_writer < 100 ){ sprintf(id2 ,"0%d" , &id_post_writer ) ; }
           
    if(id_post_writer >= 100){ sprintf(id2 ,"%d" , &id_post_writer ) ; }
    
    
    fprintf(chaine ,"%d %d %s" , id1 , id2 , post) ;
    

    fputs(chaine , file ) ;

    fclose(file) ;
    
    return 1 ;
}





 // sauvegarde des Commentaires
//vive XCode (^_^)

int saveComment(int id_comment , int id_post , int id_writer , char *comment){

    //les id sont stocké sur 3 caractères

    char chaine[500] , id1[4] ,id2[4] ,id3[4] ;


    FILE *file = fopen("comment.txt" , "a+") ;

    if( file == NULL){return 0 ;}
    
    // id1 = id_comment

    if(id_comment < 10){ sprintf(id1 ,"00%d" , &id_comment ) ; }
        
    if(id_comment > 10 && id_comment < 100 ){ sprintf(id1 ,"0%d" , &id_comment ) ; }
        
    if(id_comment >= 100){ sprintf(id1 ,"%d" , &id_comment ) ; }
        
    
    // id3 = id_post
    
    if(id_post < 10){ sprintf(id3 ,"00%d" , &id_post ) ; }
        
    if(id_post > 10 && id_post < 100 ){ sprintf(id3 ,"0%d" , &id_post ) ; }
        
    if(id_post >= 100){ sprintf(id3 ,"%d" , &id_post ) ; }
        
        
        
     // id2 = id_writer
        
    if(id_writer < 10){ sprintf(id2 ,"00%d" , &id_writer ) ; }
        
    if(id_writer > 10 && id_writer < 100 ){ sprintf(id2 ,"0%d" , &id_writer ) ; }
        
    if(id_writer >= 100){ sprintf(id2 ,"%d" , &id_writer ) ; }
    
    
    
    fprintf(chaine , "%d %d %d %s" , id1 , id2 ,id3 , comment ) ;
    
    
    fputs(chaine , file ) ;
    
    fclose(file) ;
    
    
    return 1 ;
}
