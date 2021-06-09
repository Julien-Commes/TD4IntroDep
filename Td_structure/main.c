#include <stdio.h> 
#include <stdlib.h>

#include "date.h"
#include "personne.h"

int main(){
    date* a=create_date(25,05,2000);
    personne* b=creat_personne("Felix","Josquin",a);
    print_personne(b);
}