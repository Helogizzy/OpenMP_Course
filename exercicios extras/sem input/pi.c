/*

Este programa irá calcular numericamente a integral de

                  4/(1+x*x) 
				  
de 0 a 1.  O valor desta integral é pi -- que 
é ótimo, pois nos dá uma maneira fácil de verificar a resposta.

*/

#include <stdio.h>
static long num_steps = 1024*1024*1024;
double step;
int main()
{
   int i;
   double x, pi, sum = 0.0;

   step = 1.0 / (double) num_steps;

   for (i = 0; i < num_steps; i++) {
      x = (i + 0.5) * step;
      sum += 4.0 / (1.0 + x * x);
   }

   pi = step * sum;
   printf("pi = %lf, with %ld steps ", pi, num_steps);
   return 0;
}