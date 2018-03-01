#include <stdio.h>
#include <math.h>

double func(double x)
{
    return 1/(1+(x*x));
}

int main()
{
    double a,b,n,sum1=0,sum2=0,h; int i;
    
    printf("Enter the Lower Limit\n");
    scanf("%lf",&a);
    printf("Enter the Upper Limit\n");
    scanf("%lf",&b);
    do
    {
        printf("Enter the Interval\n");
        scanf("%lf",&n);
    }while((int)n%2 !=0);
    
    h=(b-a)/n;
    for(i=1;i<n;i++)
    {
        if(i%2==0)
            sum1=sum1+func(a+i*h);
        else
            sum2=sum2+func(a+i*h);
    }
    sum1=2*sum1;    sum2=4*sum2;
    
    sum1=(func(a)+func(b)+sum1+sum2)*(h/3);
    printf("Area under the Curve will be : %lf\n",sum1);
}