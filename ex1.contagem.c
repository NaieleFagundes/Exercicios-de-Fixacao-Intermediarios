//CONTAGEM REGRESSIVA
//Solicita um número inteiro positivo e usa while para fazer uma contagem regressiva até 0. 

#include <stdio.h>
int main (){
    int n; 
    
    printf ("Digite um número inteiro positivo: \n");
    scanf ("%d", &n);
    while (n <= 0){
        printf ("Número inválido! \n");
        printf ("Digite um número inteiro positivo: \n");
        scanf ("%d", &n);
    }
    if (n > 0) {
        while (n >= 0){
          printf ("%d ", n);
          n--;
        }
    }

return 0;
}