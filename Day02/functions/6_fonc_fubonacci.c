#include <stdio.h>

int fib(int n) {
    if (n < 2)
        return n;
    else
        return fib(n - 1) + fib(n - 2);
}

int main() {
    int val1;
    

    printf("Entrez la valeur : ");
    scanf("%d", &val1);

    printf("La suite Fibonacci jusqu'à %d : ", val1);
    for (int i = 0; i < val1; i++) {
        printf("%d", fib(i));
        if (i < val1 - 1) {
            printf(", ");
        }
    }
    printf("\n"); 

    return 0;
}
