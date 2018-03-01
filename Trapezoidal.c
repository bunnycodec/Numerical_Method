#include <stdio.h>
#include <math.h>

double func(double x)
{
    return 1/(1+(x*x));
}

int main()
{
    double a,b,n,sum=0,h;
    int i;
    
    printf("Enter the Lower Limit\n");
    scanf("%lf",&a);
    printf("Enter the Upper Limit\n");
    scanf("%lf",&b);
    printf("Enter the Precision\n");
    scanf("%lf",&n);
    
    h=(b-a)/n;
    for(i=1;i<n;i++)
    sum=sum+func(a+i*h);
    
    sum=(func(a)+func(b)+(2*sum))*(h/2);
    printf("Area under the Curve will be : %lf\n",sum);
}