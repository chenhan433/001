#include <stdio.h>
int main ()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=b/100-a/100;
    d=(b-b/100*100)-(a-a/100*100);
    if(d<0)
    {
        c=c-1;
        d=d+60;
    }
    printf("%d:%d",c,d);
    return 0;
}
