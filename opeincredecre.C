#include <stdio.h>

 int main(){
     /*
     Incremento(++)
     Pré-Incremento++a
     Pós-Incrementoa++
     Decremento(--)
     Pré-Decremento--a
     Pós-Decrementoa--
     */

int numero1 = 1, resultado;
   
    printf("Antes incremento: %d\n",numero1);
    //numero1 = numero1 +1;
    //numero1 += 1;
    //pos incremento;
    //resultado = numero1;
    //numero++;
    resultado = numero1++;
    //printf("Apos incremento: %d\n",numero1);
    printf("Apos Pós-incremento-numero 1:%d-Resultado:%d\n",numero1,resultado);

    resultado = ++numero1;
    printf("Apos Pré-incremento-numero 1: %d-Resultado:%d\n",numero1,resultado);

    //numero1 = numero1-1
    //numero1 -=1;
    //numero1--;
    //printf("Apos decremento:%d\n",numero1)
    resultado = numero1--;
    printf("Apos Pos-decremento - numero 1: %d - Resultado:%d\n",numero1,resultado);
    
    resultado = --numero1;
    printf("Apos Pré-decremento - numero 1: %d - Resultado: %d\n", numero1, resultado);
    
    return 0;
 
}