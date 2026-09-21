#include <iostream>

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

int n1, n2, div, res, i;
double sx;


div=10;
div2=7;

printf("n1 n2 : ");
scanf("%d%d", &n1, &n2);
sx=0.0;
 for (i=n1; i<=n2; i++)
 {
   res =i%div;
   res2 =i%div2;
   if(res ==0) continue;     
    if (res2 ==0 ) continue;
     sx+=i;
printf("%5d\n", i);
 }
printf("suma x= %lf", sx);


}
