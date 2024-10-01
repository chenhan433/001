#include <stdio.h>
int main()
{
    double F,W;
    scanf("%lf",&F);
    W=F;
    {if(F==0)
    {printf("f(%.1lf) = %.1lf",W,F);}
     else
     {F=1/F;
      
         printf("f(%.1lf) = %.1lf",W,F);}
    }
    return 0;
        
}
