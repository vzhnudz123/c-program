/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i;
    int n=4;
    for(i=1;i<=n;i++){
        for(int j=i;j<=n-1;j++){
        printf("  ");//spaces
    }
    for(int k=1;k<=2*i-1;k++){
        printf("* ");
    }
    printf("\n");
    }//next kashnm
    for(i=n-1;i>=1;i--){
        for(int j=i;j<=n-1;j++){
            printf("  ");
        }
       for(int j = 1; j <= 2*i - 1; j++) {
            printf("* "); // Print stars
        }
        printf("\n");
    }

    return 0;
}