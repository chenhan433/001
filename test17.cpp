#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    {
	if(a>b&b>c&a>c)
    
	{
            printf("%d->%d->%d",c,b,a);}
      else if(a>c&a>b&c>b)
    {
        printf("%d->%d->%d",b,c,a);
    }
    else if(b>a&a>c&b>c)
    {
            printf("%d->%d->%d",c,a,b);}
        else if(b>c&b>a&c>a)
        {printf("%d->%d->%d",a,c,b);
    }
    else if(c>a&c>b&a>b)
    {
        printf("%d->%d->%d",b,a,c);}
    else
        {
		printf("%d->%d->%d",a,b,c);
     }
}
        return 0;
}
