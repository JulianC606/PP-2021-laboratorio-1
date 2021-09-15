/**
 * Algoritmo GetNetSalary
 * A partir de un salario bruto, retorna en pantalla el salario con el descuento educativo
 * aplicado.
 */
#include <stdio.h>
#define ED_DESC 0.125;

int main(void)
{
  /**
   * Bloque de Constantes
   */

  /**
   * Bloque de variables de entrada
   */
  float grossSalary;
  /**
   * Bloque de variables de salida
   */
  float netSalary, discount;

  /**
   * Bloque de Instrucciones
   */
  printf("¡Hola! Soy un algoritmo diseñado para ayudarte a obtener tu salario neto después del descuento");
  printf(" del seguro educativo (1.25%%). Bueno, empecemos... ¿Cuánto fue tu salario bruto?\n");
  scanf("%f", &grossSalary);
  discount = grossSalary * ED_DESC;
  netSalary = grossSalary - discount;
  printf("Este mes obtendrás: B/. %0.2f y te descontarán -B/. %.2f\n", netSalary, discount);
  printf("Buen día.\n");
  /**
   * Fin
   */
  return 0;
}