#include<stdio.h>
int main()
{
    int a[20],i,n,f,x=0;
    printf("Enter the size");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the search element");
    scanf("%d",&f);
    for(i=0;i<n;i++)
    {
        if(a[i]==f)
        {
            printf("\n element found in %d position\n",i+1);
            x++;
        } 
    }
    if(x==0)
    {
        printf("No");
    }
}