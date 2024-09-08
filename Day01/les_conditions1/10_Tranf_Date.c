#include <stdio.h>

int main()
{
    int da, mo, yea;

    char Mo[12][20] = {"Janvier", "Février", "Mars", "Avril", "Mai", "Juin",
                       "Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Decembre"};
    printf("Entrer une date en format de ( mm dd yyyy ) : ");
    scanf("%d %d %d", &mo, &da, &yea);

    printf("%02d-%s-%d", da, Mo[mo - 1], yea);

    return 0;
}

