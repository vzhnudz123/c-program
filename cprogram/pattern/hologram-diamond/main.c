/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int main() {
    int rows, space, i, j;
    printf("Enter a number to define the rows: ");
    scanf("%d", &rows);

    // Upper part of the hologram (pyramid)
    for(i = 1; i <= rows; i++) {
        for(space = 1; space <= rows-i; space++) {
            printf("  "); // Print spaces
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("* "); // Print stars
        }
        printf("\n");
    }

    // Lower part of the hologram (inverted pyramid)
    for(i = rows - 1; i >= 1; i--) {
        for(space = 1; space <= rows - i; space++) {
            printf("  "); // Print spaces
        }
        for(j = 1; j <= 2*i - 1; j++) {
            printf("* "); // Print stars
        }
        printf("\n");
    }

    return 0;
}
