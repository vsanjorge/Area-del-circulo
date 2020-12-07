#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main(void) {
  float radio;
  float area;

  printf("Introduce el radio de la circunferencia: ");
  scanf("%f", &radio);

  area = M_PI * pow(radio,2);

  printf("\nEl area del círculo según su radio es %.1f", area);

  return 0;
}