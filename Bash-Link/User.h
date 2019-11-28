#ifndef User_h
#define User_h


//Structure des utilisateur
typedef struct User User;
struct User {
    User * last;
    char login[51];
    int id ;
    char motsPasse[51];
    char nom[51];
    char prenom[51];
    char *id_amies;
    int id_postes ;
    int id_posts_likes ;
    int id_posts_commantes;
    int age;
    User * next;
};

//Structure de controle des utilisateurs
typedef struct ListUtilisateur ListUser ;
struct ListUtilisateur {
    User *tete ;
    User *queue ;
    int nb_user ;
};


User chercherUser(char *recherche){


  //à finir
  FILE *file  = fopen("User.txt" , "a+");
  char ligne[500] ;
  int id ;
  char nom[51];
  char prenom[51] ;
  char login[51] ;
  while ( fgets(ligne , 500 ,file)!= EOF) {
     sscanf(ligne , "%d %s %s %s", &id, nom ,prenom , login  ) ;
     if( (strcmp(recherche , nom) == 0 ) || (strcmp(recherche , prenom) == 0) || (strcmp(recherche , login) == 0) ){

       User usr ;
        

         strcopy(usr.nom , nom) ;
         strcopy(usr.prenom , prenom) ;
         strcopy(usr.login , login) ;

       

       return usr ;
     }

  }


}
#endif
