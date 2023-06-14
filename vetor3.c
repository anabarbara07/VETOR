/*03-Escrever um programa para:
a. Ler todo o conjunto A de seis elementos inteiros;
b. Construir um outro conjunto B formado da seguinte maneira:
i. Os elementos de índice par têm o valor de A somado com 20.
ii. Os elementos de índice ímpar tem o valor de A multiplicado por 3.*/

#include<stdio.h>

main(){

int v[6],i;

{
    printf("Valores para o conjunto A\n\n");

   for(i=0;i<6;i++)
   {
     printf("Digite um numero: ");
     scanf("%d",&v[i]);
   }

   for(i=0;i<6;i++)
   {
   if(i%2==0)
    v[i] = v[i]+20;

   if(i%2==1)
    v[i] = v[i]*3;

   }

    printf("\nConjunto B: ");

    for(i=0;i<6;i++)
   {
     printf("%d ",v[i]);

   }

}

}
