#include <stdio.h>

int main() {
    int he, mi, se;
    int he1, mi1, se1;
    
    printf("Entrez la date sous la forme de HH:MM:SS : ");
    scanf("%d%d%d", &he, &mi, &se);
    
    printf("Entrez une autre date sous la forme de HH:MM:SS : ");
    scanf("%d%d%d", &he1, &mi1, &se1);
    
    if (he < he1 || (he == he1 && mi < mi1) || (he == he1 && mi == mi1 && se < se1)) {
        printf("Le premier instant vient avant le deuxième.\n");
    } else if (he > he1 || (he == he1 && mi > mi1) || (he == he1 && mi == mi1 && se > se1)) {
        printf("Le deuxième instant vient avant le premier.\n");
    } else {
        printf("Il s'agit du même instant.\n");
    }
    
    return 0;
}
