
#ifndef POST_H
#define POST_H
#include "FonctionCustom.h"
#include "User.h"

/**

Bon voila il propose une structure de fichier pour pouvoir faire le Projet

A faire :

  Pour le design : fonctions affichePost

<<<<<<< HEAD
=======


// copyright by G3
 // copyright by G3
 // copyright by G3
 // copyright by G3
>>>>>>> 7e4a0b85efd199a7237cc986db02b97675318c58
*/



// poste d'utilisateur
typedef struct post Post;
struct post{
    Post* last;
    char *post;
    int id_post;
    int id_post_writer ;
    Post *next;
};


// Structure de Contôle des post
typedef struct ListPost ListPost ;
struct ListPost {
    Post *tete ;
    Post *queue ;
    int nb_post ;
};

//Structure de donné sera une liste double chainé circiulaire
// cette strcuture de donné servira de fil d'actualié


ListPost * initListPost(void){

  ListPost *l = (ListPost *) malloc_p(sizeof(ListPost) ) ;

  l->nb_post = 0 ;
    
    return l ;

  }


void afficheEnsemble(Post * s){
    printf("%d\n",s->id_post_writer);
    printf("%s\n",s->post);
}



/** Cette fonction retourn 0 si la liste n'existe pas  et 1 si l'ajout c'est bien effectuer

  comme la récupération du Post ce fait dans l'interface , alors il faudra passer le post en parametre

  La fonction ajoute un post en fin de liste
  */
int ajouterPost(ListPost *list , int id_user , int id_post , char *post  ){



  if (list == NULL) { return 0 ;

  } else  {



    Post newPost ;
    strcpy(newPost.post , post) ;
    newPost.id_post_writer = id_user ;


    if (list->tete == NULL) {

        list->tete = &newPost ;
        list-> queue = &newPost ;
        newPost.id_post = 0 ;
        newPost.last = NULL  ;

        newPost.next = NULL ;

        //savePost(newPost.id_post , usr->id , newPost.post ) ;
        list-> nb_post ++ ;
        return 1 ;

    }

    /**

    FILE *fichier = fopen("post.txt" , "a+") ;

    char chaine[500] ;

    char precedent[500] ;

    int id_post ;


    while( fgets( chaine  ,500,fichier) != EOF ){

      strcpy(chaine , precedent) ; }

    sscanf(precedent , "%d" , &id_post);

    newPost.id_post = id_post++ ;
    */

    newPost.id_post = id_post ;

    list->queue->next = &newPost ;

    newPost.last = list->queue ;

    list-> queue = &newPost ;

    newPost.next = NULL ;
    list-> nb_post ++ ;
    //savePost(newPost.id_post , usr->id , newPost.post ) ;
    return 1 ;
  }
}




/**

 Cette fonction retourn 0 si le post n'a pas été modifé  et 1 si la modification c'est bien effectuer

*/

int modifierPost( ListPost *list , int id_post , char *post){

  if (list == NULL) { return 0 ;

  } else  {

    Post *p = list->tete ;

    while (p->next && (p->id_post != id_post) ) { p = p->next ; }

    if(p->next == NULL) { return 0 ;}

      p->post = post ;

      return 1 ;


    }}



  int supprimerPost( ListPost *list , int id_post , char *post){
    if (list == NULL) {

      return 0 ;


    } else  {

      Post *p = list->tete ;


      //si il faut suprimer un élément en début de liste
      if(p->id_post == id_post ){

        if(p == list->queue){ list->queue = NULL ; }
        list->tete = p->next ;
        free(p) ;

        list-> nb_post -- ;
        return 1 ;
      }



      while (p->next && (p->next->id_post != id_post) ) {


        //si il faut suprimer un élément en milieur de liste
        if(p->next->id_post == id_post ){

            Post *tmp =  p-> next ;
            p->next = p->next->next ;
            p->next->last = p ;

            free(tmp) ;
            list->nb_post -- ;
            return 1 ;
        }


        p = p->next ;


      }

      //si il faut supprimer le dernier élément
      if(p->id_post == id_post){

        list->queue = p->last ;
        p->last->next = NULL ;
        free(p) ;

        list-> nb_post -- ;
        return 1 ;

      } else { return 0 ;  }

    }

  }
#endif
