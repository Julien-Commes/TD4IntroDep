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

void print_char (char* s){
    printf("%c",*s);
    while(*s++){
        printf("%c",*s);
    }
    printf("\n");
}


int* list_empty(){
    int* r=malloc(sizeof(int));
    *r=0;
    return r;
}

void append (int* s,int v){
    int n=*s;
    *s=*s+1;
    *(s+n+1)=v;
}

void print_list(int* s){
    int n=*s;
    printf("[");
    for (int i=1;i<n;i++){
        printf(" %i ,",*(s+i));
    }
    printf(" %i ]\n",*(s+n));
}

int main(){
    int* l=list_empty();
    append(l,5);
    append(l,8);
    append(l,6);
    print_list(l);
}
