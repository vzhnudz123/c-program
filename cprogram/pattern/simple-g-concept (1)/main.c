/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i;
    int n=6;
    for(i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||i==n||j==1||i==3&j>=4||j==n&i>=3){
            printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }

    return 0;
}