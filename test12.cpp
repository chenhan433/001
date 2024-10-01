#include<stdio.h>
#include<math.h>
int main()
{
    double y,x;
    scanf("%lf",&x);
    {
	if(x>=0)
    
        {
		y= pow (x,0.5);
        printf("f(%.2lf) = %.2lf",x,y);}
    else
        {
		y=(x+1)*(x+1)+2*x+1/x;
        printf("f(%.2lf) = %.2lf",x,y);}
    }
    return 0;
}
