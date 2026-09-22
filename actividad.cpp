#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
int n, i=1, j=0, m;
printf("ingrese el numero n \n");
scanf("%i",&n);

final: cout<<"*"<<endl;
goto evaluacion;
Inicial: cout<<"*";
goto evaluacion;
Intermedio: cout <<" ";
goto evaluacion;

evaluacion:
if (i<=n)
{
    if (j%(n)==0)
    { 
        if(j<(i*n))
        {
         j++;
         goto Inicial;
        }
        else
        {
         j++;
         i++;
         goto final;
        }
        
     }
    else 
    {
        if (i%n==1)
        {
            j++;
            goto Inicial;
         }
         else
         {j++;
        goto Intermedio;}
    }
} 











}