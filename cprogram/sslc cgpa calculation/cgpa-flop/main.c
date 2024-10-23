/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main() {
    int apl = 0, bpl = 0, cpl = 0, dpl = 0, sub, sum;
    float cgpa;
    printf("How many subjects: ");
    scanf("%d", &sub);

    if (sub <= 10) {
        int grade;
        printf("Enter grade for subject 1 (1 for A+, 2 for B+, 3 for C+, 4 for D+): ");
        scanf("%d", &grade);
        if (grade == 1) apl++;
        else if (grade == 2) bpl++;
        else if (grade == 3) cpl++;
        else if (grade == 4) dpl++;
    }

    return 0;
}