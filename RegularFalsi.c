#include <stdio.h>
#include <math.h>

double f(double x)
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
    }while(f(a)*f(b)>0);
    
    e=pow(10,-e);

    while(fabs(b-a)>e)
    {
        x=((a*f(b))-(b*f(a)))/(f(b)-f(a));
        if(f(x)*f(b)<0)
        a=x;
        else
        b=x;
    }
    printf("The Approximate Root will be : %lf\n",x);
}