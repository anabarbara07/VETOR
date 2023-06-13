/*leia 30 inteiros fale o maior e em q posicao*/

#include<stdio.h>

main(){

{
   int i,x,maior=0,A[10];

   for(i=0;i<10;i++)
   {
     printf("\nEntre com as notas: ");
     scanf("%f",&A[i]);

     if(A[i]>maior)
    {
       maior=A[i];
       x=i;
    }
   }
     printf("\nO maior elemento: %d",maior);
     printf("Posicao do maior elemento: %d",x);
}
}
