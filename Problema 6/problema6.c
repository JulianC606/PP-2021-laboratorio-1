/**
 * Algoritmo DollarToRenminbi
 * A partir de un monto en dólares, retorna el valor en Renminbi
 */
#include <stdio.h>

/**
 * Bloque de Constantes
 */

#define YUAN_TO_DOLLARS 6.46

int main(void)
{

  /**
   * Bloque de variables de entrada
   */

  float dollars;

  /**
   * Bloque de variables de salida
   */

  float yuans;

  /**
   * Bloque de Instrucciones
   */
  printf("¡Hola! Soy un algoritmo para cambiar dólares a yuanes (Renminbi).\n");
  printf("Para iniciar, ¿Cuántos dólares tienes?:\n");
  scanf("%f", &dollars);
  yuans = dollars * YUAN_TO_DOLLARS;
  printf("Tienes ¥/. %0.2f\n", yuans);
  printf("¡Muchas gracias!\n");

  /**
   * Fin
   */
  return 0;
}