#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

int nota, dec;

printf("nota=");
scanf("%d", &nota);
if (0<= nota && nota <=50){
             dec=nota/10;
             switch (dec){
             case 5: case 4:
             printf(" %2d Aprueba.  Muy bien. \n", nota);
             //break;
             case 3:
             printf(" %2d Aprueba. \n", nota);
             break;
             case 2: case 1: case 0:
             printf(" %2d Puede habilitar. \n", nota);
             break;

}
}
else
printf(" %d Nota inadecuada. \n", nota);
}

