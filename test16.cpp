#include<stdio.h>
int main()
{
    int N,a,b,c;
    scanf("%d",&N);
    if(100<=N & N<=999)
    {
        a=N/100;
        b=N/10-N/100*10;
        c=N/1-N/10*10;
        if(a*a*a+b*b*b+c*c*c==N) 
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        printf("Invalid Value");
    }
    return 0;
}
