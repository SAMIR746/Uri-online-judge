// Project Name   - 1013.c
// Author Name    - Md. Samir Amin
// Author E-mail  - samiramin.cse.52@gmail.com
// Created On     - 08/31/21, 07:16:24 PM

#include <stdio.h>

int main() {

    int a,b,c,x;
    scanf ("%d %d %d",&a,&b,&c);
    x=a;
    if(a<b || a<c)
    {
    if(b<c)
    {
        x=c;
    }
    else{
        x=b;
    }
    }
    printf("%d eh o maior\n",x);

    return 0;
}
