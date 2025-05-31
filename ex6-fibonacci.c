/// SEQUÊNCIA DE FIBONACCI Gera os primeiros N termos da sequência de Fibonacci. 
 
 #include <stdio.h>
 int main (){
    int f1=0, f2=1, f3, cont=1;
    
    printf ("%d, ", f1);
    printf ("%d, ",f2);
    while (cont <= 4){
        f3=f1+f2;
        printf ("%d ,",f3);
        f1 = f2;
        f2 = f3;
        cont++;
    }
    return 0;    
}