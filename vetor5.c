/*05-Criar um algoritmo que leia v�rios n�meros inteiros e positivos. A leitura se encerra quando
encontrar um n�mero negativo ou quando o vetor ficar completo. Sabe-se que o vetor
possui, no m�ximo, 10 elementos. Gerar e imprimir um vetor onde cada elemento � o
inverso do correspondente do vetor original. */

#include<stdio.h>

main(){

int i;
float n,v[i];

      for(i=0;i<10;i++)
      {
        printf("Digite um numero: ");
        scanf("%d",&v[i]);
      }

      for(i=0;i<10;i++)
      {
          if(v[i]>0)
          {
            n=v[i]*-1;
            printf("%d",n);
          }

          if(v[i]<0)
          {
            n=v[i]*-1;
            printf("%d",n);
          }
      }
    }

