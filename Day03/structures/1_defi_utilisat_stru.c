#include <stdio.h>

//define structure
typedef struct{
    char nom[20];
    char p_nom[20];
    int age;
}info;

int main(){

//remplir les information
info personne = {"Boumanjel","Hamza",22};

printf("le prénome de personne est : %s\n",personne.p_nom);
printf("le nome de personne est : %s\n",personne.nom);
printf("l'age de personne est : %d\n",personne.age);

}