#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
 int n,i=0,j=0;
 float A[2][3],s=0;
 for(i=0;i<2;i++)
 {
  for(j=0;j<3;j++)
   {
    printf("introduzca los valores para la posicion A[%i][%i]",i,j);
    scanf("%f",&A[i][j]);
   }
 }
 for(i=0;i<2;i++)
 {
    for(j=0;j<3;j++)
    {
        s=s+A[i][j];
    }

 }
 printf("la suma de los elementos de la matriz es: %f",s);
}   
