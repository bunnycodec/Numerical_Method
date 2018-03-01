#include <stdio.h>
#include <math.h>

double func(double x)
{
    return 1/(1+(x*x));
}

int main()
{
    double a,b,sum1=0,sum2=0,sum3=0,sum4=0,h; int i,n;
    
    printf("Enter the Lower Limit\n");
    scanf("%lf",&a);
    printf("Enter the Upper Limit\n");
    scanf("%lf",&b);
    do
    {
        printf("Enter the Interval\n");
        scanf("%d",&n);
    }while(n%6!=0);
    
    h=(b-a)/n;
    for(i=1;i<n;i++)
    {
        if(i%6==1 || i%6==5)
            sum1=sum1+func(a+i*h);
        else if(i%6==2 || i%6==4)
            sum2=sum2+func(a+i*h);
        else if(i%6==3)
            sum3=sum3+func(a+i*h);
        else if(i%6==0)
            sum4=sum4+func(a+i*h);
    }
    sum1=5*sum1;    sum3=6*sum3;    sum4=2*sum4;
    sum1=func(a)+func(b)+sum1+sum2+sum3+sum4;
    sum1=h*3*sum1;
    sum1=sum1/10;
    printf("Area under the Curve will be : %lf\n",sum1);
}