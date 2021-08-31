// Project Name   - 1015.c
// Author Name    - Md. Samir Amin
// Author E-mail  - samiramin.cse.52@gmail.com
// Created On     - 08/31/21, 07:40:44 PM

#include<stdio.h>
#include<math.h>

int main()
{
    double a1, a2, b1, b2, x;

    scanf("%lf %lf %lf %lf", &a1, &b1, &a2, &b2);

    x = sqrt(pow(a2-a1,2)+pow(b2-b1,2));
    printf("%.4lf\n", x);
    return 0;
}
