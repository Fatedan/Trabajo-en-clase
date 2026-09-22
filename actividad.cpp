#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
int n, i=1, j=1, m;
printf("ingrese el numero n \n");
scanf("%i",&n);
//el codigo se ejecuta aun asi esten las etiquetas, se ejecuta cada paso, lo cual altera el resultado, por eso ahi que poner un goto, para que salte este error.
goto evaluacion;
final: cout<<"*"<<endl;
goto evaluacion;
Inicial: cout<<"*";
goto evaluacion;
Intermedio: cout<<" ";
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
         i++;
         goto final;
        }
        
     }
    else 
    {
        if (i%(n)==1 || i%(n)==0)
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