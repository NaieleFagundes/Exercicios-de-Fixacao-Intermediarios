//SOMA ATÉ DIGITAR ZERO Lê números inteiros até que o usuário digite 0.
//Calcula e exibe a soma de todos os números digitados. 


#include <stdio.h>
int main (){
    int num, soma = 0;

    printf ("Digite números inteiros (para sair, digite 0): ");
    scanf ("%d", &num);

    while (num != 0){
        soma += num;
        scanf ("%d", &num);
    }

    printf ("A soma dos números digitados é: %d", soma);

    return 0; 
    
}