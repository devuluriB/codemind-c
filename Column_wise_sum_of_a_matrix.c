#include<stdio.h>
int main()
{
    int i,j,r,c,s,a[100][100];
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<c;i++)
    {
        s=0;
        for(j=0;j<r;j++)
        {
            s+=a[j][i];
        }
        printf("%d ",s);
    }
}