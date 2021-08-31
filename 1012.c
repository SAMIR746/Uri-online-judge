// Project Name   - 1012.c
// Author Name    - Md. Samir Amin
// Author E-mail  - samiramin.cse.52@gmail.com
// Created On     - 08/31/21, 07:01:06 PM

#include <stdio.h>

int main() {

    double X,Y,Z;
    scanf("%lf %lf %lf",&X,&Y,&Z);
    printf("TRIANGULO: %.3lf\n",(X*Z)/2);
    printf("CIRCULO: %.3lf\n",Z*Z*3.14159);
    printf("TRAPEZIO: %.3lf\n",((X+Y)/2)*Z);
    printf("QUADRADO: %.3lf\n",Y*Y);
    printf("RETANGULO: %.3lf\n",X*Y);

    return 0;
}
