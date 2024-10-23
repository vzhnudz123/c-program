/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

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

        if (apl < 10 && sub > 1) {
            printf("Enter grade for subject 2 (1 for A+, 2 for B+, 3 for C+, 4 for D+): ");
            scanf("%d", &grade);
            if (grade == 1) apl++;
            else if (grade == 2) bpl++;
            else if (grade == 3) cpl++;
            else if (grade == 4) dpl++;
        }

        if (apl < 10 && sub > 2) {
            printf("Enter grade for subject 3 (1 for A+, 2 for B+, 3 for C+, 4 for D+): ");
            scanf("%d", &grade);
            if (grade == 1) apl++;
            else if (grade == 2) bpl++;
            else if (grade == 3) cpl++;
            else if (grade == 4) dpl++;
        }

        if (apl < 10 && sub > 3) {
            printf("Enter grade for subject 4 (1 for A+, 2 for B+, 3 for C+, 4 for D+): ");
            scanf("%d", &grade);
            if (grade == 1) apl++;
            else if (grade == 2) bpl++;
            else if (grade == 3) cpl++;
            else if (grade == 4) dpl++;
        }

        if (apl < 10 && sub > 4) {
            printf("Enter grade for subject 5 (1 for A+, 2 for B+, 3 for C+, 4 for D+): ");
            scanf("%d", &grade);
            if (grade == 1) apl++;
            else if (grade == 2) bpl++;
            else if (grade == 3) cpl++;
            else if (grade == 4) dpl++;
        }

        if (apl < 10 && sub > 5) {
            printf("Enter grade for subject 6 (1 for A+, 2 for B+, 3 for C+, 4 for D+): ");
            scanf("%d", &grade);
            if (grade == 1) apl++;
            else if (grade == 2) bpl++;
            else if (grade == 3) cpl++;
            else if (grade == 4) dpl++;
        }

        if (apl < 10 && sub > 6) {
            printf("Enter grade for subject 7 (1 for A+, 2 for B+, 3 for C+, 4 for D+): ");
            scanf("%d", &grade);
            if (grade == 1) apl++;
            else if (grade == 2) bpl++;
            else if (grade == 3) cpl++;
            else if (grade == 4) dpl++;
        }

        if (apl < 10 && sub > 7) {
            printf("Enter grade for subject 8 (1 for A+, 2 for B+, 3 for C+, 4 for D+): ");
            scanf("%d", &grade);
            if (grade == 1) apl++;
            else if (grade == 2) bpl++;
            else if (grade == 3) cpl++;
            else if (grade == 4) dpl++;
        }

        if (apl < 10 && sub > 8) {
            printf("Enter grade for subject 9 (1 for A+, 2 for B+, 3 for C+, 4 for D+): ");
            scanf("%d", &grade);
            if (grade == 1) apl++;
            else if (grade == 2) bpl++;
            else if (grade == 3) cpl++;
            else if (grade == 4) dpl++;
        }

        if (apl < 10 && sub > 9) {
            printf("Enter grade for subject 10 (1 for A+, 2 for B+, 3 for C+, 4 for D+): ");
            scanf("%d", &grade);
            if (grade == 1) apl++;
            else if (grade == 2) bpl++;
            else if (grade == 3) cpl++;
            else if (grade == 4) dpl++;
        }

        if (apl == 10) {
            printf("Student has 10 A+ grades. Stopping input.\n");
        }

        sum = apl + bpl + cpl + dpl;
        cgpa = sum * 1.11;

        printf("Total grades: %d\n", sum);
        printf("CGPA: %.2f\n", cgpa);
    } else {
        printf("Number of subjects should not exceed 10.\n");
    }

    return 0;
}
