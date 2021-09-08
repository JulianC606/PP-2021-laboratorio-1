/**
 * Algoritmo GetDiscountedPrice
 * A partir de un precio, calcular el descuento del 25% y retornar el valor total.
 */
#include <stdio.h>

/**
 * Bloque de Constantes
 */

#define DISCOUNT_PERCENTAGE 0.25

int main(void)
{
  /**
   * Bloque de variables de entrada
   */

  float grossPrice;

  /**
   * Bloque de variables de salida
   */

  float discount, totalPrice;

  /**
   * Bloque de Instrucciones
   */

  printf("¡Hola! Soy un algoritmo para calcular el 25%% de descuento en un precio dado por ti.\n");
  printf("Para iniciar, ¿Cuál es el precio inicial?:\n");
  scanf("%f", &grossPrice);
  discount = grossPrice * DISCOUNT_PERCENTAGE;
  totalPrice = grossPrice - discount;
  printf("¡Listo! Estos son los resultados:\n");
  printf("--------------------------------------\n");
  printf("Precio inicial: B/. %0.2f\n", grossPrice);
  printf("Descuento:     -B/. %0.2f\n", discount);
  printf("Precio final:   B/. %0.2f\n", totalPrice);
  printf("--------------------------------------\n");
  printf("¡Buen día!\n");

  /**
   * Fin
   */
  return 0;
}