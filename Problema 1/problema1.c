/**
 * Algoritmo GetAverageNote
 * A partir de 5 notas dadas por el usuario, obtener el promedio.
 */
#include <stdio.h>

int main(void)
{
  /**
   * Bloque de variables de entrada
   */
  float notes[5];

  /**
   * Bloque de variables de control
   */
  int idx;

  /**
   * Bloque de variables de salida
   */
  float average;
  /**
   * Bloque de Instrucciones
   */
  printf("¡Hola! Soy un algoritmo para el promedio de 5 notas.\n");
  for (idx = 0; idx < 5; idx++)
  {
    printf("¿Cuál sería la nota #%d?: ", (idx + 1));
    scanf("%f", &notes[idx]);
    average += notes[idx] / 5;
    printf("\n");
  }
  printf("Perfecto, el promedio final es: %.2f\n", average);
  printf("¡Buen día!");
  /**
   * Fin
   */
  return 0;
}