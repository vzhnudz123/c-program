/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n=8;
    for(int i=n;i>=1;i--){
        for(int j=i;j<=n;j++){
            printf("  ");
        }
        for(int k=2*i-1;k>=1;k--){
        if(i==1||i==n||k==1||k==2*i-1){
            printf(" *");
        }
        else{
          printf("  ");  
        }
        }
    
        printf("\n");
    }

    return 0;
}
