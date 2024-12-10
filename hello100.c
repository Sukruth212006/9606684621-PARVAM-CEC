//generatea numerical pattern 5 4 3 2 1             5 4 3 2 1        
                              4 3 2 1                4 3 2 1 
                              3 2 1                    3 2 1
                              2 1                        2 1
                              1                            1  

                              
                              1                            1
                              1 2                        1 2 
                              1 2 3                    1 2 3
                              1 2 3 4                1 2 3 4
                              1 2 3 4 5            1 2 3 4 5 
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
            






