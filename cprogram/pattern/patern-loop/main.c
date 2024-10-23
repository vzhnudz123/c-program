/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    // i= row
    // j=column
   for(int i=1;i<=3;i++){
        for(int j=1;j<=2*i- 1;j++){
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}