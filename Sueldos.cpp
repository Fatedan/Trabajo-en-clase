#include <stdio.h>

int main()
{
      int nivel;
      float salario, slanuevo;
      printf("Introduce el nivel de antiguedad del trabajador: ");
      scanf("%d",&nivel);
      printf("Introduce tu salario: ");
      scanf("%f",&salario);
      switch (nivel) {
        case 5:
                slanuevo=salario+(salario*.035);
                printf("\nTu salario es:%f\n",slanuevo);
                break;
        case 6:
                slanuevo=salario+(salario*.041);
                printf("\nTu salario es: %f\n",slanuevo);
                break;
        case 7:
                slanuevo=salario+(salario*.048);
                printf("\nTu salario es: %f\n",slanuevo);
                break;
        case 8:
                slanuevo=salario+(salario*.053);
                printf("\nTu salario es: %f\n",slanuevo);
                break;
        default:
                printf("\nTu salario es: %f\n",salario);
}
return 0;
}
