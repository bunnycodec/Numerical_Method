#include <stdio.h>
#include <math.h>
double u,u1,k;
double func(double n)
{
    u1=1;
    for(k=2;k<n;k++)
    u1=((u1)*(u+k))/(k+1);
    return u1;
}

int main()
{
    int i,j,n,flag=0;
    printf("Enter Number of Data Points : ");
    scanf("%d",&n);
    double x[n],y[n][n],p,h,sum,prod;
    printf("Enter the X Data Points \n");
    for(i=0;i<n;i++)
    scanf("%lf",&x[i]);
    h=x[1]-x[0];
    for(i=2;i<n;i++)
    {
        if(x[i]-x[i-1]!=h)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("The X Data Points are not equidistant\n");
    else
    {
        printf("Enter the Y Data Points \n");
        for(i=0;i<n;i++)
        scanf("%lf",&y[i][0]);
        for(j=1;j<n;j++)
            for(i=0;i<n-j;i++)
                y[i][j]=y[i+1][j-1]-y[i][j-1];
        printf("Enter the point of Intersection : ");
        scanf("%lf",&p);
        sum=y[0][0];
        u=(p-x[0])/h;
        for(i=1;i<n;i++)
        {
            prod=func(i);
            sum=sum+(prod*y[n-1-i][i]);
        }
        printf("Answer : %lf\n",sum);
    }
}