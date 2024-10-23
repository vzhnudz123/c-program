/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

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