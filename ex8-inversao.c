//INVERSÃO DE NÚMEROS Inverta os dígitos de um número inteiro positivo.

#include <stdio.h>
int main (){
    int num, inv=0, op;
    
    printf ("Digite um número inteiro positivo: ");
    scanf ("%d", &num);
    while (num > 0){
        op = num % 10;
        inv = inv *10 + op;
        num /= 10;
	}
	printf ("%d", inv);
    return 0;
}
