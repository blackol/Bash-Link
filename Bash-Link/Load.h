#ifndef LOAD_H
#define LOAD_H

#include "Fil_actu.h"
#include <string.h>


ListPost loadFilActu(int id_user){

ListPost list = initListPost() ;
char ami_ligne[500] ;
char post_ligne[500] ;
int id_post , id_post_writer , id_usr1 , id_usr2 , actu  ;
char post[500] ;
 actu = 0 ;
FILE file_post = fopen("post.txt") ;
FILE file_ami = fopen("amis.txt") ;


while ( fgets( ami_ligne  ,500 ,file_ami)!= EOF ) {

  sscanf(ami_ligne , "%d %d" , &id_usr1 , &id_usr2) ;

  //à finir
  if(id_usr1 == id_user){

    while ( fgets( post_ligne  , 500 ,file_ami)!= EOF ) {

      sscanf(post_ligne , "%d %d" ,  &id_post ,&id_post_writer) ;

      if (id_post_writer == id_usr2 ){
          sscanf(post_ligne , "%d %d %[^\0]" ,  &id_post ,&id_post_writer , post);
          ajouterActu(list, id_post , id_post_writer , post ) ; }
          actu ++ ;
      }



     }


    if (id_usr2 == id_user) {

      while ( fgets( post_ligne  , 500 ,file_ami)!= EOF ) {

        sscanf(post_ligne , "%d %d" ,  &id_post ,&id_post_writer) ;

        if (id_post_writer == id_usr1 ){
            sscanf(post_ligne , "%d %d %[^\0]" ,  &id_post ,&id_post_writer , post);
            ajouterActu(list, id_post , id_post_writer , post ) ;
             actu ++ ;
        }

       }


  }

}
fclose(file_ami) ;
fclose(file_post) ;
if (actu){ return list ; }



}


ListPost loadPost(int id_user){

  ListPost list = initListPost() ;
  char post_ligne[500] , post[500] ;


  int id_writer , id_post ;

  FILE file_post = fopen("post.txt") ;

    while ( fgets( post_ligne  , 500 ,file_post)!= EOF ) {

      sscanf(post_ligne , "%d %d %[^\0]" , &id_post , &id_writer , post ) ;

      if(id_writer == id_user ){

        ajouterPost(list , id_user , id_post , post ) ;


      }


    }

    fclose(file_post);

    return list ;

}


loadListAmi(int id_user){

  


}

#endif
