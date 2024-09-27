#include <stdio.h>
#include <string.h>
int main()
{
	int a,b;
	double c;
	scanf("%d %d",&a,&b);
	c=(double)a/b;
	{
	if(b==0)
		printf("分母为0\n");
	else
		
	    {
		printf("分母不为0\n");
	    printf("a=%d,b=%d,c=%.3f\n",a,b,c);
		}
    }
	return 0;
	
}
