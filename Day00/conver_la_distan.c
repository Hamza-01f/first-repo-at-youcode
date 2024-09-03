#include <stdio.h>

int main(void) {
    int km;
    int yard;
     printf("entere la distance en km : ");
     scanf("%d",&km);
     
     yard = km * 1093.61;
     
     printf("le kilométrage %d en yard est %d :",km,yard);
    
    
    return 0;
}