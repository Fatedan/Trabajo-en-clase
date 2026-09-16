#include <iostream>


using namespace std;

// la función main comienza la ejecución del programa
int main()
{
   int total,n=1;        // suma de las calificaciones introducidas por el usuario
   int contadorCalificacion; // número de la siguiente calificación a introducir
   int calificacion;        // valor de la calificación
   int promedio;      // promedio de las calificaciones

   // fase de inicialización
   total = 0;          // sumatoria
   contadorCalificacion = 1;   // inicializa el contador del ciclo

   // fase de proceso
   while ( contadorCalificacion <= 10 ) {       // repite diez veces
      cout << "Introduzca la calificacion : ";          // indicador para entrada
      cin >> calificacion;                     // lee calificación del usuario
      total = total + calificacion;            // suma calificación al total
      contadorCalificacion = contadorCalificacion + 1;  // incrementa el contador
      n++;
   }

   // fase de término
   promedio = total / 10;                // división entera

   // despliega el resultado
   cout << "El promedio de la clase es " << promedio << endl;  
   return 0;   // indica que el programa terminó satisfactoriamente

} // fin de la función main