#include<stdio.h>
int main()
{
    double y,x;
    scanf("%lf",&x);
    {if (x==10)
    {
     y=1/x;
        printf("f(%.1lf) = %.1lf",x,y);
    }    
     else
     {
         y=x;
         printf("f(%.1lf) = %.1lf",x,y);
     }
        
    }
    return 0;
}
