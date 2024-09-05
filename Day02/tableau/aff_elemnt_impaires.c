 #include <stdio.h>

int main()
{
      int a;
      printf("Entrez la taille de tableau : ");
      scanf("%d",&a);
      int T[a];
      for(int i = 0 ; i < a ; i++){
          printf("Entrer la valeur de T[%d] =  ",i+1);
          scanf("%d",&T[i]);
      }
      printf("les valeurs impairs sont : \n");
      for(int j = 0 ; j < a ; j++ ){
          if(T[j] % 2 != 0 ){
            printf("%d ,",T[j]);
          }
      }
}