/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// Recursive function to print numbers from 1 to 9
void printNumbers(int n) {
    if (n > 9) {
        return; // Base case: stop when n is greater than 9
    } else {
        printf("%d ", n); // Print the current number
        printNumbers(n + 1); // Recursive call with incremented value
    }
}

int main() {
    printNumbers(1); // Start printing from 1
    return 0;
}