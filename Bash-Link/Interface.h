
#ifndef Interface_h
#define Interface_h
// copyright by G3
void affichageSupermenu(){
    printf("-----------------------------------------------------------------------------\n");
      printf("/"); printf("Bash-Link made in G3 in fouillole (Des étudiant sont morts )"); printf("\t\t\t\t/");
      printf("\n");
       printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
      printf("/"); printf("\t\t\t\t\t\t 1 afficher le fils d'actualié "); printf("\t\t\t\t\t\t/");
         printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
    printf("/"); printf("\t\t\t\t\t\t\t");printf("2 Faire une recherche ") ;printf("\t\t\t\t\t\t\t/");
         printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
      printf("/"); printf("\t\t\t\t\t\t\t"); printf("1 Sugetion d'amis");printf("\t\t\t\t\t\t\t/");
            printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
      printf("/");printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t/");
         printf("\n");
      printf("-----------------------------------------------------------------------------\n");
}

void affichageselectsupermenu(){
    printf("en construction");
}
void superMenu(){
    int choix = 0,choixsuperm=0;
    affichageSupermenu();
    scanf("%d",&choix);
    
    if (choix==1) {
        while (choixsuperm!=9) {
             affichageselectsupermenu();
            scanf("%d",&choixsuperm);
            if (choixsuperm==1) {
                 printf("en construction");
//                ajoutpost
            }
            if (choixsuperm==2) {
                printf("en construction");
//                modipost
            }
            if (choixsuperm==3) {
                printf("en construction");
//                supppost
            }
        }
    }
    if (choix==2) {
        printf("en construction");
    }
    if (choix==3) {
        printf("en construction");
    }
    // copyright by G3
}
#endif
// copyright by G3
// copyright by G3
// copyright by G3
