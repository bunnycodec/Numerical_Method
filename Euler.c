#include <stdio.h>
#include <math.h>

double func(double x,double y)
{
    return (x+(y*y));
}
int main()
{
    double x0=0,y0=1,y,y1,h,x;
    printf("Enter the Value of h : ");
    scanf("%lf",&h);
    printf("Enter the Value of x : ");
    scanf("%lf",&x);
    
    while(x0<x)
    {
        y1=y0+h*func(x0,y0);
        do
        {
            y=y1;
            y1=y0+(h/2)*(func(x0,y0)+func(x0+h,y));
        }while(fabs(y-y1)>0.0001);
        y0=y1;
        x0=x0+h;
    }
    printf("At x=%lf required value of y will be %lf\n",x,y0);
}