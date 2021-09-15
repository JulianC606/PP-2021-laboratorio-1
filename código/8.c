/**
 * Algoritmo GetSalary
 * Retorna el valor del salario diario, semanal, mensual y anual a partir del valor por hora.
 */
#include <stdio.h>

/**
 * Bloque de Constantes
 */
#define HOURS_PER_DAY 8;
#define HOURS_PER_WEEK 45;
#define WEEKS_PER_MONTH 4;
#define MONTHS_PER_YEAR 13;

int main(void)
{

  /**
   * Bloque de variables de entrada
   */
  float fare;

  /**
   * Bloque de variables de salida
   */
  float annualSalary, monthlySalary, weeklySalary, dailySalary;

  /**
   * Bloque de Instrucciones
   */
  printf("¡Hola! Soy un algoritmo para calcular tu salario total.\n");
  printf("Para empezar, me podrías decir: ¿Cuánto ganas por hora? \n");
  scanf("%f", &fare);
  weeklySalary = fare * HOURS_PER_WEEK;
  dailySalary = fare * HOURS_PER_DAY;
  monthlySalary = weeklySalary * WEEKS_PER_MONTH;
  annualSalary = monthlySalary * MONTHS_PER_YEAR;
  printf("Listo, esta sería la información de tu salario:\n");
  printf("-----------------------------------------------\n");
  printf("Con un pago por hora de: B./ %.2f\n", fare);
  printf("Por día ganas: B/. %.2f\n", dailySalary);
  printf("Por semana ganas: B/. %.2f\n", weeklySalary);
  printf("Por mes ganas: B/. %.2f\n", monthlySalary);
  printf("Por año ganas: B/. %.2f**\n", annualSalary);
  printf("-----------------------------------------------\n");
  printf("** Estamos asumiendo que tu empresa paga 28 días al mes ");
  printf("y 13 meses por año, como lo establece la ley.\n");
  printf("¡Buen día!\n");
  /**
   * Fin
   */
  return 0;
}