/**
 * Algoritmo GallonsToLiters
 * A partir de una medida de volumen en galones, retornar la medida en litros.
 */
#include <stdio.h>

/**
 * Bloque de Constantes
 */

#define GALLONS_TO_LITERS 3.78541

int main(void)
{
  /**
   * Bloque de variables de entrada
   */
  float gallons;

  /**
   * Bloque de variables de salida
   */
  float liters;

  /**
   * Bloque de Instrucciones
   */
  printf("¡Hola! Soy un algoritmo para convertir galones a litros. \n");
  printf("Para comenzar: ¿Cuántos galones tienes?\n");
  scanf("%f", &gallons);
  liters = gallons * GALLONS_TO_LITERS;
  printf("Usted tiene %0.2f litros.\n", liters);
  printf("¡Buen día!\n");

  /**
   * Fin
   */
  return 0;
}