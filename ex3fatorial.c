//CÁLCULO DE FATORIAL Calcule o fatorial de um número inteiro positivo usando while. 
//Exemplo: Entrada: 5 Saída: 120 (5! = 5×4×3×2×1)

#include <stdio.h>
int main (){
    int num, fat=1, cont = 1;

    printf ("Digite um número inteiro positivo: ");
    scanf ("%d", &num);
    while (num < 0){
        printf ("ERRO. Digite outro número: ");
        scanf ("%d", &num);
        
    }
    
    while (cont <= num){
        fat*=cont;
        cont++;
    }
    printf ("O fatorial de %d é %d ", num, fat); 
    
   return 0;
}