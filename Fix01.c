#include <stdio.h>
#define TAM 15

int main (){

    float vet[TAM];

    for (int i = 0; i < TAM; i++) {

        puts("Escreva o elemento a ser adicionado no vetor");
        scanf("%f", &vet[i]);
    }

    float menorElemento = vet[0];
    float maiorElemento = vet[0];

    for (int k = 1; k < TAM; k++){

        if (vet[k] > maiorElemento) { maiorElemento = vet[k]; }
        if (vet[k] < menorElemento) { menorElemento = vet[k]; }

    }

    printf("A soma do maior e menor elemento: %.2f\n", maiorElemento+menorElemento);

    return 0;
}