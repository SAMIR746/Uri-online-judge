// Project Name   - 1036.c
// Author Name    - Md. Samir Amin
// Author E-mail  - samiramin.cse.52@gmail.com
// Created On     - 09/04/21, 09:25:57 PM

#include<stdio.h>
#include <math.h>

int main()
{
 double a, b, c, t;
 scanf("%lf %lf %lf", &a, &b, &c);

 if(((b * b) - 4 * a * c) < 0 || a == 0){
     printf("Impossivel calcular\n");
 }
 else
 {
  t = sqrt((b * b) - 4 * a * c);
  printf("R1 = %.5lf\n", ((-b + t) / (2 * a)));

  printf("R2 = %.5lf\n",((-b - t) / (2 * a)));
}
 return 0;
}
