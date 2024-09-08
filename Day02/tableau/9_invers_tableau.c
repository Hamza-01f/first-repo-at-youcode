#include <stdio.h>

int main()
{
      int T1[8] = {1,5,4,2,3,8,7,10};
      int T2[8];
      printf("bienvenue a votre program! : \n");

      for(int i = 0 ; i < 8 ; i++){
        T2[i] = T1[8-i-1];
      }

      printf("le tableau original : \n");
      for(int j = 0 ; j < 8 ; j++ ){
        printf("%d ,",T1[j]);
      }

      printf("\nle tableau inverse : \n");
      for(int j = 0 ; j < 8 ; j++ ){
        printf("%d ,",T2[j]);
      }

      return 0;
}