#include <stdio.h>
#include <math.h>

double func(double x)
{
    return pow(10,x)+x-4;
}

int main()
{
    double a,e,b,x;
    
    printf("Enter the Accuracy\n");
    scanf("%lf",&e);
    
    do
    {
        printf("Enter the Interval \n");
        scanf("%lf\t%lf",&a,&b);
    }while(func(a)*func(b)>0);
    
    e= pow(10,-e);
    x=a;
    
    while(fabs(b-a)>e)
    {
        x=(b+a)/2;
        if(func(x)*func(b)<0)
        a=x;
        else
        b=x;
    }
    printf("The Approximate Root will be : %lf\n",x);
}