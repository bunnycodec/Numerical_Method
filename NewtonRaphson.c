#include <stdio.h>
#include <math.h>

double diff(double x)
{
    return pow(10,x)+x-4;
}

double ddiff(double x)
{
    return ((pow(10,x)*log(10)*2.303)+1);
}

int main()
{
    double a,e,b,x,h=1;
    
    printf("Enter the Accuracy\n");
    scanf("%lf",&e);
    
    do
    {
        printf("Enter the Interval \n");
        scanf("%lf\t%lf",&a,&b);
    }while(diff(a)*diff(b)>0);
    
    e=pow(10,-e);
    x=a;
    
    while(fabs(h)>e)
    {
        h=-(diff(x)/ddiff(x));
        x=x+h;
    }
    printf("The Approximate Root will be : %lf\n",x);
}