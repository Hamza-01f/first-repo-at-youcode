#include <stdio.h>
#include <string.h>

int main(){

    char str[50];
    char car;

    printf("Entrez une chaine pour la tranfer a majescule : ");
    scanf("%s",str);
   
    //converter la chaine
    for(int i = 0 ; i < strlen(str) ; i++){
        if(str[i] >= 'a' && str[i] <= 'z')
           str[i] = str[i] - 32;
    }

    printf("la chaine apres la converte a majescule : %s\n",str);

    return 0;
    
}