/*01-Escrever um algoritmo para ler cinco valores inteiros, calcular a sua média, e escrever na tela
os números que são superiores à média.*/

#include<stdio.h>

main(){

int v[5],i,m,soma=0;

  for(i=0;i<5;i++)
  {
    printf("Entre com um numero: ");
    scanf("%d",&v[i]);

    soma=soma+v[i];
  }

  m=soma/5;
  printf("\nNumeros superiores a media: ");

  for(i=0;i<5;i++)
  {
     if(v[i]>m)
   printf("%d ",v[i]);

  }

}
