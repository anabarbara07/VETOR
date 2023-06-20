/*05- Elaborar um algoritmo que leia um conjunto de 30 valores e os coloca em 2 vetores conforme
os valores forem pares ou ímpares. O tamanho do vetor é 5 posições. Se algum vetor estiver
cheio escreve-lo. Terminada a leitura escrever o conteúdo dos dois vetores.*/

#include<stdio.h>

main(){

int v[5],a[5],ta,tv,i,n;

for(i=0;i<30;i++)
{
  printf("Digite um valor: ");
  scanf("%d",&n);

  if(n%2==0)
   n=v[i];

  if(n%2==1)
   n=a[i];

   tv=tv+v[i];
   ta=ta+a[i];

}

printf("Total vetor pares: %d",tv);
printf("Total vetor impares: %d",ta);








}
