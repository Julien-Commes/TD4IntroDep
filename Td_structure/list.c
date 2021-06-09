#include <stdio.h> 
#include <stdlib.h>

#include "date.h"
#include "list.h"

list* empty_list(){
    list* res=malloc(sizeof(list));
    res->date=NULL;
    res->suivant=NULL;
    return res;
    }

void insert(date* p, list* l){
    list* copy_l=malloc(sizeof(list));
    copy_l->suivant=l->suivant;
    copy_l->date=l->date;
    l->suivant=copy_l;
    l->date=p;
}

void print_list(list* p){
    if (p->date!=NULL){
        print_date(p->date);
        printf("  ");
        print_list(p->suivant);
    }  
    else{
        printf("\n");
    }
}