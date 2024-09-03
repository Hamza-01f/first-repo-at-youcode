#include <stdio.h>

int main(void) {
    int cel;
    int kelv;
    
    printf("entrer la température en celsius : ");
    scanf("%d",&cel);
    
    kelv = cel + 273.15 ;
    
    printf("température %d ° en kelvin formula est : %d\n",cel,kelv);
    
    return 0;
}