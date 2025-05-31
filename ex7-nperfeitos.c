//verificador de numeros perfeitos//
//soma dos divisores = número


#include <stdio.h>
int main(){
    int num, cont = 1, somadiv=0;
    
    printf ("Digite um número: ");
    scanf ("%d", &num);
    while (cont < num){
        if (num % cont == 0){
            somadiv+=cont;
        }
        cont++;
    }
    if (somadiv ==num) {
        printf ("%d é perfeito", num);
    }else {
        printf ("%d não é perfeito", num);
    }
    
return 0;
}