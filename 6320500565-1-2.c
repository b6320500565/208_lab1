#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a<0||a>pow(10,9)||b<0||b>pow(10,9))
    {
        printf("ERROR");
    }
    else
    {
    printf("%d",a+b);
    }
}
