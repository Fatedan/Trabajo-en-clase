#include <iostream>
#include <math.h>
using namespace std;
int main(){
float a, c, b;

printf("Ingrese el numero de pesos que desea convertir a dolares \n");
scanf("%f",&b);
c=1.0/3200; //si se ponen solo enteros la division da ojo!.
a=b*c;
printf("El total de dolares es:%f \n",a);

return 0;
}
