#include<stdio.h>
int main()
{
    int n,i,s=0,c=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s+=i;
        }
        else
        {
            c++;
        }
    }
    if(s>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}