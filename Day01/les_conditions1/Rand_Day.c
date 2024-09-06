#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(NULL));
char *Days[7]={"Lundi","Mardi ","Marcredi","Jeudi","Vendredi","Samedi","Dimanche"};
int rand_val = sizeof(Days) / sizeof(Days[0]);

int choo_val = rand() % rand_val ;
printf("la valeur choisée aléatoirement est : %s \n",Days[choo_val]);
     return 0;
}