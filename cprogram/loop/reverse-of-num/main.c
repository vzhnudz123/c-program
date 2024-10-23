/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Using a for loop to count down from n to 1
    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
