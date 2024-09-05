#include <stdio.h>
#include <string.h>


int main(){
    char Tab1[11] = "youssoufia";

    int lon = 0 ;
    for(int i = 0 ; i < 11 ; i++ ){

        if(Tab1[i] == 0)
         break;
        else
        lon += 1 ;
     }

     printf("la longeur de tableau est : %d ",lon);
    
}