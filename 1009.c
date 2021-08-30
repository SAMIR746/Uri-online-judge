// Project Name   - 1009.c
// Author Name    - Md. Samir Amin
// Author E-mail  - samiramin.cse.52@gmail.com
// Created On     - 08/30/21, 11:10:58 PM

#include<stdio.h>
int main()
{
  double salary,value,
  TOTAL;
  char name;
  scanf("%s %lf %lf",&name,&salary,&value);

  TOTAL = salary+value*.15;
  printf("TOTAL = R$ %.2lf\n",TOTAL);
  return 0;
}
