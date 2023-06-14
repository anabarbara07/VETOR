/*01-Escreva um programa que leia um vetor V[15] de números inteiros, mostrar o conteúdo das
posições pares*/

#include<stdio.h>

main(){

{
  int i,v[15];

  for(i=0;i<15;i++)
  {
    printf("Entre com um numero: ");
    scanf("%d",&v[i]);

  }

  for(i=0;i<15;i++)
  {
     if(i%2==0)
        printf("O conteudo da posicao %d: %d\n",i,v[i]);
  }

}

}
