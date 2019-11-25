#ifndef LOAD_H
#define LOAD_H

#include "Fil_actu.h"
#include <string.h>
int loadFilActu(User *user){

ListPost list = initListPost() ;
char ami_ligne[500] ;
char post_ligne[500] ;
int id_post , id_post_writer , id_usr1 , id_usr2 , pers  ;
char post[500] ;

FILE file_post = fopen("post.txt") ;
FILE file_ami = fopen("amis.txt") ;


while ( fgets( ami_ligne  ,500 ,file_ami)!= EOF ) {

  sscanf(ami_ligne , "%d %d" , &id_usr1 , &id_usr2) ;

  //à finir
  if(id_usr1 == user->id){

    while ( fgets( post_ligne  , 500 ,file_ami)!= EOF ) {

      //à finir
      if () {

      }

     }


  }

  if (id_usr2 == user->id) {

  }

}

}

#endi(f
