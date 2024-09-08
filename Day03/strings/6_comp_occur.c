#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    char car;

    printf("Entrez votre string : ");
    scanf("%s",str);

    printf("Entrez le caractére de compte : ");
    scanf(" %c",&car);
    
    int count = 0;
    for(int i = 0 ; i < strlen(str) ; i++){
        if(str[i] == car)
         count++;
    }

    printf("le caractére '%c' apparaît dans la chaîne. %d fois :\n",car,count);

    return 0;
}