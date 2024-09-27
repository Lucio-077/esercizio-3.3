#include <stdio.h>

int main(void) {
    char nome;
    int eta;
    printf("Inserire nome (solo iniziale) : ");
    scanf("%c", &nome);
    printf("eta': ");
    scanf("%d", &eta);
    if (eta >= 18) {
        printf("%c e' maggiorenne\n",nome);

    } else {printf("%c e' minorenne\n",nome);}
    }
