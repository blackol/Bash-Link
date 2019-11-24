// commentaire d'utilisateur
typedef struct comment Comment;
struct comment{
    Comment* last;
    char *comment;
    int id_comment;
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
