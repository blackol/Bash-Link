//Structure des utilisateur
typedef struct Utilisateur User;
struct Utilisateur {
    Utilisateur * last;
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


int chercherUser(){


  //à finir 
  FILE *file  = fopen("User.txt" , "a+") ;



}
