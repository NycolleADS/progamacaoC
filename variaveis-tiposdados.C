#include <stdio.h>

 int main(){
     int idade = 21;
     int quantidade = 10;
     float altura = 1.66;
     double saldobancario = 50.000;
     double peso = 52.3;
     char inicial = 'n';
     char nome[21] = "nycolle";

     printf("idade: %d anos\n" , idade);
     printf("quantidade: %d\n", quantidade);
     printf("altura: %.2f mentros\n", altura);
     printf("saldobancario: %.2f reais\n", saldobancario);
     printf("peso: %.2f kg\n", peso);
     printf("inicial do nome: %c\n", inicial);
     printf("nome: %s\n", nome);

 return 0;
 
}