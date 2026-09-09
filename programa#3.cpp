//#include <iostream>
//using namespace std;
//int main (){
//int c=5;
//cout<<c<<endl;
//cout<<c++<<endl;
//cout<<c<<endl;
//return 0;

//}

#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a,b,c;
printf("Ingrese un numero mayor o igual a 0:\n");
scanf("%f",&a);
b=fabs(a);
c=sqrt(b);
printf("La raiz del numero es:%f \n",c);
return 0;


}