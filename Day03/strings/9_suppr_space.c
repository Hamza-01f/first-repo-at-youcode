#include <stdio.h>
#include <string.h>

int main(){

    char str[50];
    char car;

    printf("Entrez une chaine qui contient des espaces : ");
    gets(str);
   
    printf("la chaine apres la  Suppression des Espaces : ");

    for(int i = 0 ; str[i] != '\0' ; i++){
        if(str[i] != ' ')
           printf("%c",str[i]);
    }
    
    return 0;
}