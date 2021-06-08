#include <stdio.h> 
#include <stdlib.h>

#include "date.h"

int main(){
    date* a=create_date(25,05,2000);
    print_date(a);
}