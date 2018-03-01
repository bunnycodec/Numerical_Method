#include <stdio.h>
#include <math.h>

double func(double x,double y)
{
    return (x+(y*y));
}
int main()
{
    double x0=0,y0=1,k1,k2,k3,k4,h,x;
    printf("Enter the Value of h : ");
    scanf("%lf",&h);
    printf("Enter the Value of x : ");
    scanf("%lf",&x);
    
    while(x0<x)
    {
        k1=h*func(x0,y0);
        k2=h*func(x0+h/2,y0+k1/2);
        k3=h*func(x0+h/2,y0+k2/2);
        k4=h*func(x0+h,y0+k3);
        y0=y0+(k1+2*k2+2*k3+k4)/6;
        x0=x0+h;
    }
    printf("At x=%lf required value of y will be %lf\n",x,y0);
}