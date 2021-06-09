#include <stdio.h> 
#include <stdlib.h>

#include "date.h"
#include "personne.h"
#include "list.h"

int main(){
    date* a1=create_date(25,05,2000);
    date* a2=create_date(18,05,2000);
    list* b=empty_list();
    insert(a1,b);
    insert(a2,b);
    print_list(b);
}