//MÉDIA DE NOTAS VÁLIDAS Peça notas (0 a 10) até que o usuário digite uma nota inválida.
//Calcule a média das notas válidas.
// Exemplo: Entrada: 7, 8, 11 Saída: Média = 7.5

#include <stdio.h>
int main (){
    int cont = 0;
    float nota, media=0, somanotas=0;
    
    printf ("Digite as notas (0 a 10): ");
    scanf ("%f", &nota);
    
    while (nota >=0 && nota <= 10){
        somanotas+=nota;
        cont++;
        scanf ("%f", &nota);
    }
    if (cont > 0){
        media =somanotas/cont;
        printf ("Média: %.1f", media);
        
    } else {
        printf ("Nenhuma nota válida foi digitada.");
    }
    

    return 0;
}