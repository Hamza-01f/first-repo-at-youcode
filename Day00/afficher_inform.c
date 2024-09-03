#include <stdio.h>

int main() {
    char nom[50], prenom[50], sexe, email[50];
    int age;

    // Saisie des informations
    printf("Entrez votre nom: ");
    scanf("%s", nom);

    printf("Entrez votre prénom: ");
    scanf("%s", prenom);

    printf("Entrez votre âge: ");
    scanf("%d", &age);

    getchar();

    printf("Entrez votre sexe 'H' pour Homme et 'F' pour Femme: ");
    scanf("%c", &sexe);

    printf("Entrez votre adresse email: ");
    scanf("%s", email);

    // Affichage des informations
    printf("\nInformations Personnelles:\n");
    printf("Nom: %s\n", nom);
    printf("Prénom: %s\n", prenom);
    printf("Âge: %d\n", age);
    printf("Sexe: %c\n", sexe);
    printf("Email: %s\n", email);

    return 0;
}