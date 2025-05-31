//MÁXIMO E MÍNIMO Leia números até digitar 0.
//Encontre o maior e o menor número. 

#include <stdio.h>
int main (){
  int num, maior=0, menor;
    
  printf ("Digite um número (0 para sair): ");
  scanf ("%d", &num);
  if (num == 0){
    printf ("Nenhum número foi digitado");
    return 1;
  }

  maior = num;
  menor = num;
  while (num != 0){
    scanf ("%d", &num);
    if (num > maior){
        maior = num;
    }

    if (num < menor && num != 0){
      menor = num;
    }
  }

  printf ("Máximo = %d \n", maior);
  printf ("Mínimo = %d", menor);
    
  return 0;
}