#include <stdio.h>

int main(void) {
    int km_h ;
    int m_s;
    
    printf("Entrer la distance en (km/h) : ");
    scanf("%d",&km_h);
    
    m_s = km_h * 0.27778;
    
    printf("la distance %d km/h en m/s est : %d\n ",km_h,m_s);

    return 0;
}