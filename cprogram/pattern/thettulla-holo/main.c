/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n=10;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||i==n||j==n||j==1||i==j||j==(n-i+1)){
            printf(" *");
            }
        else{
            printf("  ");
        }}
        printf("\n");
    }

    return 0;
}