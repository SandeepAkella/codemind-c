
#include<stdio.h>
int main()
{
    int n,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(n%2==0)
    {
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("0");
    }
}


