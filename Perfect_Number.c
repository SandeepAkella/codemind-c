#include<stdio.h>
int main()
{
    int n,fc=0,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            fc+=i;
        }
    }
    if(n==fc)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}