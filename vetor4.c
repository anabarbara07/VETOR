/*04-Desenvolver um programa que efetue a leitura de 5 elementos de um vetor A. No final,
apresente o total da soma de todos os elementos que sejam �mpares. Perceba que deve
ser verificado o conte�do do vetor e n�o o �ndice.*/

#include<stdio.h>

main(){

int a[5],i,soma=0;

 {
   for(i=0;i<5;i++)
   {
     printf("Digite um numero: ");
     scanf("%d",&a[i]);
   }

   for(i=0;i<5;i++)
   {
       if(a[i]%2==1)
        soma=soma+a[i];
   }

   printf("\nA soma dos numeros impares: %d",soma);






 }


}
