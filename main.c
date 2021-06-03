#include <stdio.h>

int len_l(char* s){
    int len =0;
    while(*s++){
        len++;
    }
    return len;
}

int nb_e(char* s){
    int res=0;
    while (*s++){
        if (*s == 'e'){
            res++;
        }
    }
    return res;
}

int main(){
    char* txt="abeefoirec";
    printf("%i\n",nb_e(txt));
}
