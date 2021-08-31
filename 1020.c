// Project Name   - 1020.c
// Author Name    - Md. Samir Amin
// Author E-mail  - samiramin.cse.52@gmail.com
// Created On     - 08/31/21, 08:17:58 PM

#include<stdio.h>

int main()
{
 int y, m, d;

 scanf("%d", &d);

 y = d / 365;

 m = d % 365 / 30;

 d = d % 365 % 30;

 printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);

 return 0;

}
