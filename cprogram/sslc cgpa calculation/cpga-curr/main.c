/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int apl, cpl, a, b, c, sum = 0, bpl;
    float cgpa;
    
    printf("How many A+ grades: ");
    scanf("%d", &apl);
    
    if (apl >= 10) {
        sum = apl * 9;
    } else {
        sum += apl * 9;
        
        printf("Enter A grades: ");
        scanf("%d", &a);
        sum += a * 8;
        
        printf("Enter B+ grades: ");
        scanf("%d", &bpl);
        sum += bpl * 7;
        
        printf("Enter B grades: ");
        scanf("%d", &b);
        sum += b * 6;
        
        printf("Enter C+ grades: ");
        scanf("%d", &cpl);
        sum += cpl * 5;
        
        printf("Enter C grades: ");
        scanf("%d", &c);
        sum += c * 4;
    }
    
    cgpa = sum * 1.11;
    printf("CGPA: %.2f\n", cgpa);
    
    return 0;
}
