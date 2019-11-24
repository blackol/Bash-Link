#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dico.h"

typedef struct Utilisateur Utilisateur;
struct Uti{
  char *nom;
  char *prenom;
  char *mdp;
  char *mpd1;
  char *question1;
  char *question2;
  char *id_amies;
  int id;
  Utilisateur *suivant;
}

typedef struct List List;
struct List{
  Utilisateur contenu;
}

typedef struct Ajout Ajout;
struct Ajo{
  char *sport;
  char *film;
  char *school;
  char *jeux;
}

 ListAjo *Ajo(Liste *liste, int nbr){
   Ajo *id_amies = malloc(sizeof(*id_amies));
   if (liste == NULL || nbr == NULL)
   {
     exit(EXIT_FAILURE);
   }
   id_amies -> suivant = liste -> premier;
   liste -> premier = id_amies;
 }
/* Faire des suggestions d'amis en fonction du sport, des films, de school et des jeux puis en fonction des amis en commun*/
void suggestami(Liste *liste){
  printf("Liste d'Utilisateur qui peuvent plaire à %s %s :\n",prenom, nom);
/*Ami en commun
 Ami pratiquant le meme sport
 Ami etant dans la meme ecole
 Ami aimant les meme jeux
 Ami aimant les meme films*/
}

int main() {
  return 0;
}
