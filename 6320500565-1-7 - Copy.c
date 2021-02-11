#include <stdio.h>
int main()
{
    float t;
    int x=t*100;
    scanf("%f",&t);
    if(t<0.00||t>=24)
    {
    printf("ERROR");
    }
    else if(x % 100>=60)
    {
    printf("ERROR");
    }
    else
    {
    if(t<12.00)
    {
    printf("%.2f a.m.",t);
    }
    else
    {
    printf("%.2f p.m.",t);
    }
    }
}
