#include <stdio.h>
#include <string.h>

char *reverseString(char or_s[], char reversed[]) {
    int length = strlen(or_s);
    for (int i = 0; i < length; i++) {
        reversed[i] = or_s[length - 1 - i];
    }
    return reversed;
}

int main() {
    char or_s[100];
    char reversed[100];
    printf("Entrez une chaine : ");
    scanf("%s", or_s);
    reverseString(or_s, reversed);
    printf("le chaine original est : %s\n",or_s);
    printf("le chaine inversee est : %s\n", reversed);
    
    return 0;
}
