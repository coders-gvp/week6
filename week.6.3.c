#include<stdio.h>
int main()
{
    int a[20],i,n,b,s;
    printf("Enter the size");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    b=a[0];
    s=a[0];
    for(i=0;i<n;i++)
    {
        if(b<a[i])
        b=a[i];
        if(s>a[i])
        s=a[i];
    }
    printf("The largest element is %d\n",b);
    printf("The smallest element is %d",s);
}