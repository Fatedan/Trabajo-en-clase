#include <stdio.h>
#include <iostream>

using namespace std;
int main(){
    float a,b,c;
    printf("ingrese el primer el primer numero \n");
    scanf("%f",&a);
    printf("ingrese el segundo punto de la coodenada \n ");
    scanf("%f",&b);
    cin >> c;
    if ((a==0.0) || (b==0.0)){
     printf("el punto se encuentra sobre el eje x o y \n");
    }
    else{ 
        if (a>0.0){ 
         if (b>0.0){
            printf("el punto esta sobre el cuadrante 1 \n");
        }
            else{
            printf("el punto esta sobre el cuadrante 4 \n");
        }
        }
        else{
            if (b>0.0){
            printf("el punto esta sobre el cuadrante 2 \n");}
            else{
            printf("el punto esta sobre el cuadrante 3 \n");}}
    }    
return 0; 
}
