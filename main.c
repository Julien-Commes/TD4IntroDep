#include <stdio.h>
#include <stdlib.h>

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

char* copy (char* s){
    char* res=malloc(len_l(s)*sizeof(char));
    *res='A';
    for(int i=1;i<len_l(s);i++){
        *(res+i)=*(s+i);        
        }
    return res;
}

void print_l (char* s){
    printf("%c",*s);
    while(*s++){
        printf("%c",*s);
    }
    printf("\n");
}

int main(){
    char* txt="abeefoirec";
    char* txt_copy= copy(txt);
    print_l(txt_copy);
}
