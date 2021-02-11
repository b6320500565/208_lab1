#include <stdio.h>
#include <math.h>
int main()
{
    int x1,s;
    scanf("%d",&x1);
    scanf("%d",&s);
    if(x1<-100000000||x1>pow(10,8)||s<-100000000||s>pow(10,8))
    {
        printf("ERROR");
    }
    else
    {
        printf("%d\n",(2*s)-x1);
    }
}


