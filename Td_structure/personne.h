#ifndef PERSONNE
#define PERSONNE

#include "date.h"

typedef struct _personne{
        char* nom;
        char* prenom;
        date* naissance;
    } personne;

personne* creat_personne (char* prenom,char* nom,date* naissance);
void print_personne(personne* p);


#endif