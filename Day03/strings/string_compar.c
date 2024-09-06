#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, areEqual = 1;
    printf("Entez le premier string: ");
    scanf("%s", str1);

    printf("Enter le deuxiem string: ");
    scanf("%s", str2);

    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            areEqual = 0;
            break;
        }
        i++;
    }
    if (areEqual) {
        printf("les deux string sont le méme .\n");
    } else {
        printf("les deux string sont pas le méme .\n");
    }

    return 0;
}
