#ifndef User_h
#define User_h
//Structure des utilisateur
typedef struct Utilisateur User;
struct User {
    User * last;
    char login[51];
    int id ;
    char motsPasse[51];
    char nom[51];
    char prenom[51];
    char *id_amies;
    int *id_postes ;
    int *id_posts_likes ;
    int *id_posts_commantes;
    int age;
    Utilisateur * next;
};

//Structure de controle des utilisateurs
typedef struct ListUtilisateur ListUer ;
struct ListUtilisateur {
    Utilisateur *tete ;
    Utilisateur *queue ;
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
  while ( fgets(line , 500 ,file)!= EOF) {
     sscanf(ligne , "%d %s %s %s", &id, nom ,prenom , login  ) ;
     if( (strcmp(recherche , nom) == 0 ) || (strcmp(recherche , prenom) == 0) || (strcmp(recherche , login) == 0) ){

       User usr ;

       usr.nom = nom ;
       usr.prenom = prenom ;
       usr.login = login ;

       return usr ;
     }

  }


}
#endif
