/*02-Armazenar 8 n�meros em um vetor e imprimir todos os n�meros. Ao final, teremos o total
de n�meros m�ltiplos de seis digitados.*/

#include<stdio.h>

main(){

int v[8],i,m6=0;

{
   for(i=0;i<8;i++)
   {
     printf("Digite um numero: ");
     scanf("%d",&v[i]);

     if(v[i]%6==0)
        m6++;
   }

   printf("\nTodos os numeros: ");

   for(i=0;i<8;i++)
   {
     printf("%d ",v[i]);
   }

    printf("\nMultiplos de 6 digitados: %d",m6);

}


}
