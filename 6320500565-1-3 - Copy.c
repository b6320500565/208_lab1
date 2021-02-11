#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<0||a>pow(10,1000000))
    {
        printf("ERROR");
    }
    else
    {
        printf("%d\n",a%3);
        printf("%d",a%11);
    }
}

