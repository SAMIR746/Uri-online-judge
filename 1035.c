// Project Name   - 1035.c
// Author Name    - Md. Samir Amin
// Author E-mail  - samiramin.cse.52@gmail.com
// Created On     - 09/04/21, 09:12:12 PM

#include <stdio.h>

int main() {

    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if( (b>c) && (d>a) && (c+d>a+b) && c>=0 && c>=0 && (a%2==0) )
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
    return 0;
}
