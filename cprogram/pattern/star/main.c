/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line after printing each row of asterisks
    }
    return 0;
}