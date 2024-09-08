#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    char str2[20];
    int found = 0;

    printf("Entrez une chaîne de caractères : ");
    gets(str);

    printf("Entrez une sous-chaine pour vérifier la présence ou non : ");
    gets(str2);

    int leng1 = strlen(str);
    int leng2 = strlen(str2);

    for (int i = 0; i <= leng1 - leng2; i++) {
        int j;
    
        for (j = 0; j < leng2; j++) {
            if (str[j] != str2[j]) {//comparer chaque element de les deux strings
                break;
            }
        }
        if (j == leng2) { 
            found = 1;
            break;
        }
    }

    if (found) {
        printf("La sous-chaîne %s est trouvée.\n", str2);
    } else {
        printf("La sous-chaîne %s est pas trouvée.\n", str2);
    }

    return 0;
}
