/**
 * Algoritmo GetTotalPriceOfTwoProducts
 * A partir del precio de dos productos, retorna el precio total con impuesto del 7%.
 */
#include <stdio.h>

/**
 * Bloque de Constantes
 */
#define ITBMS 0.07

int main(void)
{
  /**
   * Bloque de variables de entrada
   */
  float product1, product2;
  /**
   * Bloque de variables de salida
   */
  float tax, subtotal, total;
  /**
   * Bloque de Instrucciones
   */
  printf("¡Hola! Soy un algoritmo para calcular el impuesto de 2 productos.\n");
  printf("Para comenzar, ¿Cuál es el precio del producto 1?:\n");
  scanf("%f", &product1);
  printf("Ahora, ¿Cuál es el precio del producto 2?:\n");
  scanf("%f", &product2);
  subtotal = product1 + product2;
  tax = subtotal * ITBMS;
  total = subtotal + tax;
  printf("Perfecto, este es el total:\n");
  printf("----------------------------------------------\n");
  printf("Producto 1:   B/. %0.2f\n", product1);
  printf("Producto 2:   B/. %0.2f\n", product2);
  printf("Subtotal:     B/. %0.2f\n", subtotal);
  printf("Impuestos:    B/. %0.2f\n", tax);
  printf("Total         B/. %0.2f\n", total);
  printf("----------------------------------------------\n");
  /**
   * Fin
   */
  return 0;
}