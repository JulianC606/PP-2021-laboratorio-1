/**
 * Algoritmo GetAverageNote
 * A partir de 5 notas dadas por el usuario, obtiene el promedio.
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
  idx = 0;
  do
  {
    printf("¿Cuál sería la nota #%d?: ", (idx + 1));
    scanf("%f", &notes[idx]);
    average += notes[idx] / 5;
    printf("\n");
    idx++;
  } while (idx < 5);

  printf("Perfecto, el promedio final es: %.2f\n", average);
  printf("¡Buen día!\n");
  /**
   * Fin
   */
  return 0;
}