#include <stdio.h>
#define max 20
int main()
{
    int a[max],i,j,l,n,k,i1,j1,l1,flag=0;
    printf("enter size of the array:-\n");
    scanf("%d",&n);
    printf("enter elements:-\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter any number:-\n");
    scanf("%d",&k);
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(l=j+1;l<n;l++)
            {
                if(a[i]+a[j]+a[l]==k)
                {
                    i1=a[i];
                    j1=a[j];
                    l1=a[l];
                    flag++;
                    break;
                }
            }
        }
    }
    if(flag!=0)
    {
        printf("elements are :- %d %d %d",i1,l1,j1);
    }
    else
    {
        printf("elements do not exist");
    }
    return 0;
}
