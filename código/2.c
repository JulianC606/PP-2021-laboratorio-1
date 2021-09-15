/**
 * Algoritmo FahrenheitToCelsius
 * A partir de una temperatura en Fahrenheit (°F) convertirla a su equivalente en Celsius (°C).
 */
#include <stdio.h>

int main(void)
{
  /**
   * Bloque de variables de entrada
   */
  float fahrenheit;
  /**
   * Bloque de variables de salida
   */
  float celsius;
  /**
   * Bloque de Instrucciones
   */
  printf("¡Hola! Soy un algoritmo para calcular la conversión de Fahrenheit a Celsius\n");
  printf("Para comenzar, ¿Cuál sería la temperatura en Fahrenheit (°F)?:\n");
  scanf("%f", &fahrenheit);
  celsius = ((fahrenheit - 32) * 5) / 9;
  printf("Perfecto, la temperatura en celsius es: %.2f°C\n", celsius);
  printf("¡Buen día!\n");
  /**
   * Fin
   */
  return 0;
}