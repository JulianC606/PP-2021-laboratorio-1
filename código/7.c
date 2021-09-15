/**
 * Algoritmo TaxCalculator
 * Recibe un precio y devuelve el precio total con el impuesto (%7).
 */
#include <stdio.h>

/**
 * Bloque de Constantes
*/
#define TAX_PERCENTAGE 0.07

int main(void)
{
  /**
   * Bloque de variables de entrada
   */
  float grossPrice;

  /**
   * Bloque de variables de salida
   */

  float tax, totalPrice;

  /**
   * Bloque de Instrucciones
   */

  printf("¡Hola! Soy un algoritmo que te ayudará a saber el precio total de un producto.\n");
  printf("Para iniciar, me podrías decir: ¿Cuál es el precio inicial?\n");
  scanf("%f", &grossPrice);
  tax = grossPrice * TAX_PERCENTAGE;
  totalPrice = grossPrice + tax;
  printf("¡Listo! esto son los resultados:\n");
  printf("--------------------------------\n");
  printf("Precio:   B/. %0.2f\n", grossPrice);
  printf("Impuesto: B/. %0.2f\n", tax);
  printf("Total:    B/. %0.2f\n", totalPrice);
  printf("--------------------------------\n");

  printf("¡Gracias por utilizarme!\n");
  printf("¡Buen día!\n");

  /**
   * Fin
   */
  return 0;
}