/*03- Leia um vetor de 40 posições e acumule os valores do primeiro elemento no segundo, deste no
terceiro e assim por diante. Ao final, escreva o vetor obtido.*/

#include<stdio.h>

main(){

int v[40],i,e=0;

for(i=0;i<40;i++)
{
   printf("Digite um numero: ");
   scanf("%d",&v[i]);
}

for(i=0;i<40;i++)
{
    e=e+v[i]+v[i-1];
}
 printf("%d",e);

}

