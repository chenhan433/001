#include<stdio.h>
int main()
{
    double y,x;
    scanf("%lf",&x);
    {if(0<x and x<=50)
    {
        y=x*0.53;
        printf("cost = %.2lf",y);
    }
     else if(x>50)
     {
         y=x*0.53+(x-50)*0.05;
         printf("cost = %.2lf",y);
     }
     else
     {
         printf("Invalid Value!");
     }
     }
    return 0;
}
