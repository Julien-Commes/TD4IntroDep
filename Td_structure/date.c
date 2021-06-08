#include <stdio.h> 
#include <stdlib.h>

#include "date.h"

date* create_date(int j,int m,int a){
    date* res=malloc(sizeof(date));
    res->j=j;
    res->m=m;
    res->a=a;
    return res;
}

void print_date(date* s){
    printf("%i/%i/%i\n",s->j,s->m,s->a);
}






