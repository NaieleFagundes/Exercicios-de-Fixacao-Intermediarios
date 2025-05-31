///CONVERSÃO DECIMAL-BINÁRIO Converta um número decimal para binário usando restos de divisão.
// Exemplo: Entrada: 10 Saída: 1010 (10 em binário)

#include <stdio.h>
int main (){
    int decimal, binario=0, resto, cont=1;

    printf ("Digite um número decimal: ");
    scanf ("%d", &decimal);

    while (decimal > 0){
        resto = decimal % 2;
        binario = binario + resto*cont;
        cont*=10;
        decimal /=2;
    }
    
    printf ("%d",binario );


    return 0;
}