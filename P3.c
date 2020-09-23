#include <stdio.h>

int main() 
{
  int num1 = 0;
  int num2 = 0;
  int fatorial();
  printf("Entre com um número para calcular o fatorial correspondente:\n");
  scanf("%d", &num1);
  fatorial(num1);
  return 0;
}

int fatorial(num1, num2)
{
  num2 = num1 *(num1 - 1)*(num1 - 2);
  printf("O fatorial de número %d é %d.\n", num1, num2);
  return 0;
}
