#include <stdio.h>

typedef struct 
{
    int x;
    int y;
}pointeur;

int main(){
    pointeur *p;
    pointeur poi_valeur;

    p = &poi_valeur;

    p ->x = 10;
    p ->y = 20;

    printf("x = %d \n",p -> x);
    printf("y = %d",p ->y );
}
