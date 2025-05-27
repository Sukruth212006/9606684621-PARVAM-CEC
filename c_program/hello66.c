/*genrate the numerical pattern 5 4 3 2 1
                                 5 4 3 2 1 
                                 5 4 3 2 1
                                 5 4 3 2 1
                                 5 4 3 2 1*/
#include<stdio.h>
int main()
{
    int i,j,n=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ",n-j+1);
            }
            printf("\n");
            }
            return 0;
}            
    



