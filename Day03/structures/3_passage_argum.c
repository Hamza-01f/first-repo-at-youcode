#include <stdio.h>

 struct rectangle{
    int longeur;
    int largeur;
};

int qul_air(struct rectangle rect){
     
     return rect.longeur * rect.largeur;
}

int main(){
   
   struct rectangle rect;

   printf("Entrez le longeur de rectangle : ");
   scanf("%d",&rect.longeur);

   printf("Entrez le largeur de rectangle  : ");
   scanf("%d",&rect.largeur);

   int air = qul_air(rect);

   printf("le air de rectangle est : %d ",air);


}