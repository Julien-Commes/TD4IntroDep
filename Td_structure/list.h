#ifndef LIST
#define LIST

#include "date.h"

typedef struct _list{
        date* date;
        struct _list* suivant;
    } list;

list* empty_list();
void insert(date* p, list* l);
void print_list(list* p);

#endif