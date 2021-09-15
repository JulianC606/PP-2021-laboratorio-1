#include <stdio.h>

/**
 * Algoritmo GetDistance
 */
int main(void)
{
  /**
   * Bloque de variables de entrada
   */
  float speed, hours, minutes;

  /**
   * Bloque de variables de salida
   */
  float distance;

  /**
   * Bloque de Instrucciones
   */
  printf("¡Hola! Soy un algoritmo diseñado exclusivamente para decirte la distancia recorrida en determinado tiempo. \n");
  printf("Bueno, empecemos... Por favor, introduce la velocidad:  \n");
  scanf("%f", &speed);
  printf("Perfecto!, tu velocidad es de %.2f km/h. ¿Por cuántas horas estuviste en esa velocidad? \n", speed);
  scanf("%f", &hours);
  printf("¡Listo! Ahora, ¿Cuántos minutos? \n");
  scanf("%f", &minutes);
  if (minutes >= 60)
  {
    printf("Error, solo se puede tener 60 minutos en una hora. Lo siento, vuelve a intentarlo.\n");
    return 0;
  };
  distance = speed * (hours + (10 * minutes) / 60);
  printf("La distancia recorrida fue de %.2f km en un tiempo de %.0f:%0.f horas a %.2f km/h.\n", distance, hours, minutes, speed);
  printf("Espero haber sido de ayuda, ¡gracias!\n");
  printf("Ten un buen día  \n");
  /**
   * Fin
   */
  return 0;
}