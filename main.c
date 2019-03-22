#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   printf("Start\n");
    double a=4.16;
    double b=5.07;
    double x=7.48;
    double q;
    printf("%f %f %f \n", a, b, x);
    q=exp(a*b)*(cos(2/(1-x))+b*sin(3*x));
    printf("Answer\n");
    printf("%f",q);
    return 0;
}
