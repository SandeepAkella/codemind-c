
#include<stdio.h>
int main()
{
    int a[20],even=0,odd=0,i,n;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
    if (a[i]%2==0)
    {
        even++;
    }
    else
    {
        odd++;
    }
    }
    printf("%d %d",even,odd);
    return 0;
}

