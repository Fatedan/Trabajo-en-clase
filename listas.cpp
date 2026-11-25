#include <iostream>
#include <stdio.h>
#include <math.h>


int main()
{
   float A[10],s,PromA=0,suma=0;
   int i,n;
   printf("Intrduzca n:");
   scanf("%i",&n);
   for (i=0; i<=9;i++)
    {
        printf("Introduzac el elemento A(%i)",i);
        scanf("%f",&A[i]);
        suma=suma+A[i];
    

    }
    PromA=suma/n;
    suma=0;
    for(i=0;i<=9;i++) suma=suma+pow((A[i]-PromA),2);

            s=sqrt(suma/(n-1));
            printf("promedio es %f",PromA);
            printf("La suma es %f",s);

}
