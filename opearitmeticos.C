#include <stdio.h>

 int main(){
     /*Soma (+)
     Subtração(-)
     Multiplicação(*)
     Divisão(/)
     */

    int numero1,numero2;
    int soma,subtração,multiplicação,divisão;

    printf("Entre com o numero 1: \n");
    scanf("%d",&numero1);
    printf("Entre com o numero 2: \n");
    scanf("%d" , numero2);

    //operação soma
    soma = numero1 + numero2;
      //operação subtração
    subtração = numero1 - numero2;
      //operção multiplicação
    multiplicação = numero1 * numero2;
      //operção divisão
    divisão = numero1 / numero2;

    printf("A Soma é: %d\n",soma);
    printf("A Subtração é: %d/n" ,subtração);
    printf("A Multiplicação é %d\n", multiplicação);
    printf("A Divisão é: %d\n", divisão);


 }