#include <stdio.h>
int main()
{
    int i=0,n,max=0,x=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
            x=i;
        }
    }
    printf("%d  ",x+1);
    printf("%d",max);
}
