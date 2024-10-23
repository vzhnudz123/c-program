/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=1;
    int number=0;
    printf("enter a number");
    scanf("%d",&number);
    
    do{
        printf("%d\n",(number*i));
        i++;
    }
    while(i<=10);
    
    return 0;
}