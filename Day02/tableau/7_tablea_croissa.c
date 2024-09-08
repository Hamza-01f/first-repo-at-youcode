#include <stdio.h>

int main(){
    int a;
    int swa;
    printf("Entrez la taille : ");
    scanf("%d",&a);

    int T[a];
    for(int i = 0 ; i < a ; i++ ){
        printf("Entrer la valeur de T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }

    for(int i = 0 ; i < a ; i++ ){
        for( int j = i+1 ; j < a ; j++ ){
            if(T[i] > T[j] ){
                swa = T[j];
                T[j] = T[i];
                T[i] = swa;
            }
        }
    }
    printf("le tableau T aprés l'order croissant :\n");
    for(int i = 0 ; i < a ; i++ ){
        printf("%d,",T[i]);
    }

    return 0;
}