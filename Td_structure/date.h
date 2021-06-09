#ifndef DATE
#define DATE

typedef struct _date{
        int j;
        int m;
        int a;
    } date;

date* create_date(int j,int m,int a);
void print_date(date* s);

#endif