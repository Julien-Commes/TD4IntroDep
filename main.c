#include <stdio.h>

int len_l(char* s){
    int len =0;
    while(*s++){
        len++;
    }
    return len;
}

int main(){
    char* txt="abc";
    printf("%i\n",len_l(txt));
}




