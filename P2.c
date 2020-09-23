#include <stdio.h>


int main()

{
   int i;
   printf("Entre com um número para determinar se ele é par:\n");
   scanf("%d", &i);

   if (i % 2 == 0)
   {
      printf("O número %d é par!\n", i);
   }
   else
   {
      printf("O número %d é ímpar!\n", i);
   }
   
   return 0;
}
