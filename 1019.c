// Project Name   - 1019.c
// Author Name    - Md. Samir Amin
// Author E-mail  - samiramin.cse.52@gmail.com
// Created On     - 08/31/21, 08:16:07 PM

#include<stdio.h>
int main(){
   int h, m, s, x;
   scanf("%d", &x);

   h = x / 3600;
   m = x % 3600 / 60;
   s = x % 60;
   printf("%d:%d:%d\n", h, m, s);
   return 0;
}
