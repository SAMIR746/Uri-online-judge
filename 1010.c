// Project Name   - 1010.c
// Author Name    - Md. Samir Amin
// Author E-mail  - samiramin.cse.52@gmail.com
// Created On     - 08/30/21, 11:16:57 PM

#include <stdio.h>

int main()
{
 int a, b;
 double c, res;

 scanf("%d %d %lf", &a, &b, &c);
 res = b * c;
 scanf("%d %d %lf", &a, &b, &c);
 res += b * c;
 printf("VALOR A PAGAR: R$ %.2lf\n", res);

 return 0;
}
