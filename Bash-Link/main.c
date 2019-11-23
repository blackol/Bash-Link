#include <stdio.h>
//
//  main.c
//  Bash-Link
//  Created by Anthony Colvil on 21/11/2019.
//  Copyright © 2019 Anthony Colvil. All rights reserved.
//




//Structure des utilisateur
typedef struct Utilisateur Utilisateur;
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
    int âge;
    Utilisateur * next;
};
//Structure de controle des utilisateurs
typedef struct ListUtilisateur ListUser ;
struct ListUtilisateur {
    Utilisateur *tete ;
    Utilisateur *queue ;
    int nb_user ;
};

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

// commentaire d'utilisateur
typedef struct comment Comment;
struct comment{
    Post* last;
    char *comment;
    int id_comment;
    int id_post ;
    Post *next;
};
// Structure de Contrôle des commentaire
typedef struct List ListComment ;
struct ListComment {
    Post *tete ;
    Post *queue ;
    int nb_Post ; ;
};




int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    printf("c'est bon");
    return 0;
}

