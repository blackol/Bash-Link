#ifndef User_h
#define User_h

#include "FonctionCustom.h"

//Structure des utilisateur
typedef struct User User;
struct User {
    User * last;
    char login[51];
    int id ;
    //char motsPasse[51];
    char nom[51];
    char prenom[51];
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


void * initListUser(void){ return (ListUser *) malloc_p(sizeof(ListUser)) ;  }

void ajouterUser( ListUser *l   ,char *nom , char *prenom , char *login , int age ){
    
    
    User usr ;
    
    strcpy(usr.login , login) ;
           
    strcpy(usr.nom , nom) ;
        
    strcpy(usr.prenom , prenom) ;
           
    usr.age  = age ;
    
    l-> nb_user ++ ;
    
    if(l->tete){
        
        l-> tete  =  &usr ;
        
        l-> queue =  &usr ;
        
        usr.last =  NULL ;
        
        usr.next = NULL ;
        
        
    } else {
        
        
        usr.next  = NULL ;
        usr.last  =  l->queue ;
        l->queue->next = &usr ;
        
        l->queue =  &usr ;
        
    }
}


void * buildUser(int id_user){
    
     FILE *file = fopen("user.txt" , "a+");
     char ligne[500] ;
     int age , id ;
     char nom[51];
     char prenom[51] ;
     char login[51] ;
    User usr ;
    while (fgets(ligne, 500, file) !=EOF) {
        sscanf(ligne , "%d %d %s %s %s", &id, &age , nom ,prenom , login  ) ;
        
        if(id == id_user ){
            
            strcpy(usr.nom , nom) ;
            strcpy(usr.prenom , prenom) ;
            strcpy(usr.login , login) ;
            usr.age = age ;
            return &usr ;
        }
        
    
    
    }
    
    
    return NULL ;
    
}

ListUser * chercherUser(char *recherche){

  
ListUser *l =  initListUser();
    
  //à finir
    FILE *file;
    file = fopen("user.txt" , "a+");
  char ligne[500] ;
  int age , id ;
  char nom[51];
  char prenom[51] ;
  char login[51] ;
  
  while ( fgets(ligne , 500 ,file)!= EOF) {
     sscanf(ligne , "%d %d %s %s %s", &id, &age , nom ,prenom , login  ) ;
     if( (strcmp(recherche , nom) == 0 ) || (strcmp(recherche , prenom) == 0) || (strcmp(recherche , login) == 0) ){

         
         ajouterUser(l ,nom ,prenom ,login ,age) ;

       
     }

  }
    fclose(file) ;
    return l ;

}

int isFiends(int id_pers1 , int id_pers2){
    
    //kiku me revoila (^_^)
    
    FILE *file =  fopen("ami.txt", "a+") ;
    
    char ligne[500] ;
    
    int id1 , id2  ;
    
    
    while ( fgets(ligne , 500 ,file)!= EOF) {
        
        sscanf(ligne, "%d %d",&id1 , &id2  ) ;
        
        if( (id1 == id_pers1 && id2 == id_pers2 )  || (id2 == id_pers1 && id1 == id_pers2 ) ){
            
            fclose(file) ;
            return 1 ;
        }
        
    }
    
    fclose(file);
    return 0 ;
    
}



ListUser * suggestUser(int id_user){
    
    
    /**
     
     a propos de la sugestion
     
        enfaite la fonction renvoie l'adresse d'une liste doublement  chainée , une cellule  = un utilisateur
                    
        dès qu'un utilisateur à un amie mais qu'il n'est pas ami avec un de ces ami alors il est ajouter à la liste de sugestion
    */
    
    //kikou me revoila (^_^)
    

    FILE *file_ami = fopen("ami.txt", "a+") ;
    
    ListUser *list = initListUser() ;
    
    int pers1 , pers2 , pers3 , pers4  ;

    char ligne1[500],  ligne2[500] ;
    
    while ( fgets(ligne1 , 500 ,file_ami)!= EOF) {
    
        sscanf(ligne1, "%d %d",&pers1 , &pers2  ) ;
        
        
        if(pers1 == id_user){
            
        FILE *file_amie_de_amie = fopen("ami.txt", "a+") ;
            
            while ( fgets(ligne2 , 500 ,file_amie_de_amie)!= EOF) {
                
                sscanf(ligne2, "%d %d" , &pers3 , &pers4 ) ;
                
                
                if( ( pers3 == pers2 ) && ( isFiends( pers4 , id_user) == 0 ) ){
                    
                    //pers 4 est une personne à sugérer
                    
                    User *usr = buildUser(pers4) ;
                    
                    ajouterUser(list, usr->nom, usr->prenom, usr->login, usr->age) ;
                    
                    
                    
                }
                
                
                if( ( pers4 == pers2 ) && ( isFiends( pers3 , id_user) == 0 ) ){
                    //pers 3 est une personne à sugérer
                    
                    User *usr = buildUser(pers3) ;
                    
                    ajouterUser(list, usr->nom, usr->prenom, usr->login, usr->age) ; }
                
                
            }
            
            
            fclose(file_amie_de_amie) ;
        }
        
        
        
        
        
        
        if(pers2 == id_user){
            
        FILE *file_amie_de_amie = fopen("ami.txt", "a+") ;
            
            while ( fgets(ligne2 , 500 ,file_amie_de_amie)!= EOF) {
                
                sscanf(ligne2, "%d %d" , &pers3 , &pers4 ) ;
                
                
                if( ( pers3 == pers1 ) && ( isFiends( pers4 , id_user) == 0 ) ){
                    
                    //pers 4 est une personne à sugérer
                    
                    User *usr = buildUser(pers4) ;
                    
                    ajouterUser(list, usr->nom, usr->prenom, usr->login, usr->age) ;
                    
                    
                    
                }
                
                
                if( ( pers4 == pers1 ) && ( isFiends( pers3 , id_user) == 0 ) ){
                    //pers 3 est une personne à sugérer
                    
                    User *usr = buildUser(pers3) ;
                    
                    ajouterUser(list, usr->nom, usr->prenom, usr->login, usr->age) ; }
                
                
            }
            
            
            fclose(file_amie_de_amie) ;
        }
        
    }
    
    return list ;
    
}


#endif
