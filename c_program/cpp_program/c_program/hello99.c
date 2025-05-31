//generate a numerical pattern 1 2 3 4 5 
                               1 2 3 4 5
                               1 2 3 4 5
                               1 2 3 4 5
                               1 2 3 4 5

                               1 2 3 4 5 
                               1 2 3 4 
                               1 2 3 
                               1 2 
                               1 

                               5 4 3 2 1
                               5 4 3 2 
                               5 4 3 
                               5 4 
                               5 

#include<stdio.h>
int main(){
    int i,j,n=5;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            printf("%d ",j+1);
            }
            printf("\n");
            }
            for(i=0;i<n;i++){
                for(j=0;j<n-i-1;j++){
                    printf("%d ",n-j);
                    }
                    printf("%d\n",n-i);
                    }
                    return 0;
}      
        
        

    


     
