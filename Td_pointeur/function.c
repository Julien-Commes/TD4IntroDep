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

void insert(int* s,int value){
    int n=*s;
    *s=*s+1;
    for (int i=n;i>0;i--){
        *(s+i+1)=*(s+i);
    }
    *(s+1)=value;
}

int len_list (int* s){
    return *s;
}

void print_list(int* s){
    int n=*s;
    printf("[");
    for (int i=1;i<n;i++){
        printf(" %i ,",*(s+i));
    }
    printf(" %i ]\n",*(s+n));
}

int* slice(int*s,int init,int fin){
    int* res = malloc((fin-init+1)*sizeof(int));
    if (fin<*s){
        *res=fin-init;
        for(int i=1;i<=*res;i++){
            *(res+i)=*(s+i+init);
        }
        return res;
    } 
}