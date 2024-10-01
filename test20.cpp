#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a/100;
    c=a/10-a/100*10;
    d=a/1-a/10*10;
    if(c==0&d==0)
    {
    printf("%d",b);
        return 0;
    }
    else if(d==0)
    {
        printf("%d%d",c,b);
    return 0;
    }
    else
    {
      printf("%d%d%d",d,c,b);
    }
    return 0;
    
}
