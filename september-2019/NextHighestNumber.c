#include<stdio.h>
void main()
{
    int n,a[20],temp;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=n;i>0;i--)
    {
        if(a[i]>a[i-1])
        {
            temp=a[i];
            a[i]=a[i-1];
            a[i-1]=temp;
            break;
        }
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d",a[i]);
    }
}
