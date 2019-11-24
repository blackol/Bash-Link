#include<stdio.h>
#include<stdlib>
typedef struct Utilisateur Utilisateur;
struct Uti{
	char *nom;
	char *prenom;
	char *login;
	char *mdp;
	char *mdp1;
	char *question1;
	char *question2;
	Utilisateur *suivant;
};
typedef struct List List;
struct List{
	Utilisateur contenu;
};
int hachage(char *tableau)
{
 int i = 0, nombreHache = 0;
    for (i = 0 ; chaine[i] != '\0' ; i++)
    {
        nombreHache += chaine[i];
    }
    nombreHache %= 100;
    return nombreHache;
}
int pagedaccueil(int choixMenu)
{
	int choixMenu;
	List liste;	
	printf("-----------Bienvenue sur BashLink---------------------\n");	  
	printf("\n");
	printf("\n");
	printf("\n");
	printf("Découvrez la communauté sur votre terminale!\n");
	printf("\n");
	List *liste = initialisation();
	printf("S'inscrir,tapez 1\n");
	scanf("%s\n",&choixMenu);
	printf("Se connecter,tapez 2\n");
	scanf("%s\n",&choixMenu);
	
	while(choixMenu!=1 || choixMenu!=2){
	printf("choix incorrect\n");	
	printf("S'inscrir,tapez 1\n");
	scanf("%s\n",&choixMenu);
	printf("Se connecter,tapez 2\n");
	scanf("%s\n",&choixMenu);
	}
	if(choixMenu==1){	
		ajoutUti(liste);
	}
	if(choisirMenu==2){
		connexion(liste);
		
	}
Liste *initialisation()
{
    List *liste = malloc(sizeof(*liste));
    Utilisateur *element = malloc(sizeof(*element));
    if (liste == NULL || element == NULL)
    {
        exit(EXIT_FAILURE);
    }
    element->nombre = 0;
    element->suivant = NULL;
    liste->premier = element;
    return liste;
}
void ajoutUti(Liste *liste){
	Utilisateur *a=malloc(sizeof(Utilisateur));
	int qt1,qt2;
	if(liste->premier==NULL){
	a=liste->premier;
	}else{
	a=liste->premier->suivant;}
	printf("Créez votre compte\n");
	printf("\n");
	printf("Entrez votre nom");
	scanf("%s",a->nom);
	printf("Entrez votre prenom");
	scanf("%s",a->prenom);
	printf("Définir un login\n");
	scanf("%s",a->login);
	printf("Définir un nouveau  mot de passe\n");
	scanf("%s",a->mdp);
	printf("Définir anouveau votre mot de passe\n");
	scanf("%s",a->mdp1);
	while(mdp!=mdp1){
		printf("Définir un nouveau  mot de passe\n");
		scanf("%s",a->mdp);
		printf("Définir anouveau votre mot de passe\n");
		scanf("%s",a->mdp1);
	}
	printf("Choisir deux question secrète,tapez le chiffre qui le précède");
	printf("1:Nom de jeune fille de votre mère");
	printf("2:Nom de votre chien");
	printf("3:Le prénom de votre premier enfant");
	printf("4:Votre lieu de naissance");
	printf("5:Prénom de votre père");
	printf("6:La marque de votre premiere voiture");
	printf("7:Votre sport préféré");
	printf("8:Votre second prenom");
	printf("9:Votre couleur préférée");
	printf("10:Votre animal préférée");
	scanf("%d",&qt1);
	scanf("%d",&qt2);
	//question 1
	if(qt1==1){
		a->question1=[Nom de jeune fille de votre mère];
	}
	if(qt1==2){
		a->question1=[Nom de votre chien];
	}
	if(qt1==3){
		a->question1=[Le prénom de votre premier enfant];
	}
	if(qt1==4){
		a->question1=[Votre lieu de naissance];
	}
	if(qt1==5){
		a->question1=[Prénom de votre père];
	}
	if(qt1==6){
		a->question1=[La marque de votre premiere voiture];
	}
	if(qt1==7){
		a->question1=[Votre sport préféré];
	}
	if(qt1==8){
		a->question1=[Votre second prenom];
	}
	if(qt1==9){
		a->question1=[Votre couleur préférée];
	}
	if(qt1==10){
		a->question1=[Votre animal préférée];
	}
	//question2
	
	if(qt2==1){
		a->question2=[Nom de jeune fille de votre mère];
	}
	if(qt2==2){
		a->question2=[Nom de votre chien];
	}
	if(qt2==3){
		a->question2=[Le prénom de votre premier enfant];
	}
	if(qt2==4){
		a->question2=[Votre lieu de naissance];
	}
	if(qt2==5){
		a->question2=[Prénom de votre père];
	}
	if(qt2==6){
		a->question2=[La marque de votre premiere voiture];
	}
	if(qt2==7){
		a->question2=[Votre sport préféré];
	}
	if(qt2==8){
		a->question2=[Votre second prenom];
	}
	if(qt2==9){
		a->question2=[Votre couleur préférée];
	}
	if(qt2==10){
		a->question2=[Votre animal préférée];
	}		
	
//chercher comment sauvegarder sur C
	return a;
}
void connexion(Liste *liste){
	Utilisateur *b=malloc(sizeof(Utilisateur));
	Utilisateur *c=malloc(sizeof(Utilisateur));
	b=liste->premier;
	printf("Login");
	scanf("%s",b->login);
	printf("Mot de Passe");
	scanf("%s",b->mdp);
	if(b->login==liste->premier->login && b->mdp==liste->premier->mdp){
		Menu();
	}else{
		printf("//le login ou le mot de passe est/sont incorrect(s)//");
		printf("Login");
		scanf("%s",b->login);
		printf("Mot de Passe");
		scanf("%s",b->mdp);
	}
	if(b->login!=liste->premier->login && b->mdp!=liste->premier->mdp){
		
		if(b==NULL){
		printf("//le login ou le mot de passe est/sont incorrect(s)//");
		printf("Login");
		scanf("%s",b->login);
		printf("Mot de Passe");
		scanf("%s",b->mdp);}
		b=liste->premier->suivant;
	}if(b==NULL){
		printf("Si vous avez oublié votre mot de passe,tapez 1");
		scanf("%d",&oubli);
		
	else {
	//return b a la place et le mettre en parametre de la fonction menu
		Menu();
	}}
