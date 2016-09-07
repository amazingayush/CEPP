#include<stdio.h>
int main()
{
    int  a[20],i,j,k,p1,p2,p3,flag=0,min,sum,n;
    printf("enter size of the array:-\n");
    scanf("%d",&n);
    printf("enter values:-\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    min=a[0]+a[1]+a[2];
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                sum=abs(a[i]+a[j]+a[k]);
                if(sum<min)
                {
                    p1=a[i];
                    p2=a[j];
                    p3=a[k];
                }
            }
        }
    }
    printf("NO's are %d %d %d",p1,p2,p3);
    return 0;
}
