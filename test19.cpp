#include <stdio.h>
int main()
{
    double a,b,c,d;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    if(a+b+c>d&b+c+d>a&a+c+d>b&b+a+d>c)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
