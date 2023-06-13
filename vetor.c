/*leia 10 e mostre os numeros com indice par*/

#include<stdio.h>

main(){

{
   float v[6];
   int i;

   for(i=0;i<10;i++)
   {
     printf("\nEntre com as notas: ");
     scanf("%f",&v[i]);
   }

   for(i=0;i<10;i++)
   {
         if(i%2==0)
        printf("\nNumeros nas posiçoes pares: %f",v[i]);
   }

}






}




