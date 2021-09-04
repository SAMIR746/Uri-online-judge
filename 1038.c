// Project Name   - 1038.c
// Author Name    - Md. Samir Amin
// Author E-mail  - samiramin.cse.52@gmail.com
// Created On     - 09/04/21, 10:01:13 PM

#include <stdio.h>

int main() {

    int x; // prodict code
    int y;// qantitie
    double z;

    scanf("%d %d",&x,&y);
    if(x==1)
    {
        z = 4.00*y;
        printf("Total: R$ %.2lf\n",z);
    }
    else if (x==2)
    {
        z = 4.50*y;
       printf("Total: R$ %.2lf\n",z);
    }
    else if(x==3)
    {
        z = 5.00*y;
       printf("Total: R$ %.2lf\n",z);
    }
    else if(x==4)
    {
        z = 2.00*y;
       printf("Total: R$ %.2lf\n",z);
    }
    else
    {
        z = 1.50*y;
       printf("Total: R$ %.2lf\n",z);
    }

    return 0;
}
