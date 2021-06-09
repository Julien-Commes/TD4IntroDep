#include <stdio.h> 
#include <stdlib.h>

#include "date.h"
#include "personne.h"

personne* creat_personne (char* prenom,char* nom,date* naissance){
    personne* res= malloc(sizeof(personne));
    res->naissance=naissance;
    res->nom=nom;
    res->prenom=prenom;
}

void print_personne(personne* p){
    printf("%c",*(p->prenom));
    while (*(p->prenom)++){
        printf("%c",*(p->prenom));
    }
    printf("  %c",*(p->nom));
    while (*(p->nom)++){
        printf("%c",*(p->nom));
    }
    printf("\nné le ");
    print_date(p->naissance);
}