#include<stdio.h>
int main()
{
    int a[20],i,n,ne=0,p=0,e=0,o=0,s=0,z=0;
    printf("Enter the size");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        p++;
        if(a[i]<0)
        ne++;
        if(a[i]==0)
        z++;
        if(a[i]%2==0)
        e++;
        if(a[i]%2!=0)
        o++;
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("The number of positive numbers is %d\n",p);
    printf("The number of negative numbers is %d\n",ne);
    printf("The number of even numbers is %d\n",e);
    printf("The number of odd numbers is %d\n",o);
    if(z>=1)
    printf("zero is niether positive nor negative number\n");
    printf("The sum of the array elements is %d\n",s);
   
}