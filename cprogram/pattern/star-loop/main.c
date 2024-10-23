/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    for(int i=1;i<=5;i++){
        
        for(int j=i;j<=5;j++){
            printf(" ");
        }
        for(int p=1;p<=i;p++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}