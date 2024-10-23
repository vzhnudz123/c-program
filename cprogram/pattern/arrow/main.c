/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n=6;
    for(int i=n;i>=1;i--){
        for(int j=i;j<=n;j++){
            printf(" ");
        }
        for(int k=1;k<=5;k++){
                printf("*");
        }
        printf("\n");
    }
    for(int i=n;i>=1;i--){
        for(int x=1;x<=i;x++){
            printf(" ");
        }
        for(int y=1;y<=5;y++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}