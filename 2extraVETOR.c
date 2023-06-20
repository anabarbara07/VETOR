/*02-Construa um algoritmo que leia 50 valores inteiros e positivos e:
· Encontre o maior valor
· Encontre o menor valor
· Calcule a média dos números lidos*/

#include<stdio.h>

main(){

int v[5],i,maior=0,menor=100,m,soma=0;

 for(i=0;i<5;i++)
 {
   printf("Digite um numero: ");
   scanf("%d",&v[i]);

   soma=soma+v[i];

   if(v[i]>maior)
    maior=v[i];

   if(v[i]<menor)
    menor=v[i];

 }
   m=soma/5;

   printf("\nMaior valor: %d", maior);
   printf(" Menor valor: %d", menor);
   printf(" Media: %d", m);
}
