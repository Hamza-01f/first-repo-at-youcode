#include <stdio>

int main(void)
{
    char Nom[15];
    char Pr_Nom[15];
    int Age;
    char Sexe;
    char Email[50];
    
    printf("-------------------BIENVENUE---------------------\n");
    
    printf("Entrer votre Nom : ");
    gets(Nom);
    printf("Entrer votre Prénom : ");
    gets(Pr_Nom);
    puts("Entrer votre Email : ");
    gets(Email);
    printf("Entrer votre age : ");
    scanf("%d",&Age);
    printf("Entrer votre sexe H pour l'homme est F pour la famme : ");
    scanf(" %c",&Sexe);
    
    //afficher les information
    
    printf("votre nome est : ");
    puts(Nom);
    printf("votre prénom est : ");
    puts(Pr_Nom);
    printf("votre Email address est :");
    puts(Email);
    printf("votre age est : %d ans \n",Age);
    printf("votre sexe est : %c\n",Sexe);

    return 0;
}