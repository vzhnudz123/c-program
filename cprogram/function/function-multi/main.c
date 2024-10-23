/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void sum();
void main(){
    printf("\ncall");
    sum();
}

//multi

void sum(){
    int a,b;
    printf("\nenter 2 num");
    scanf("%d%d",&a,&b);
    int multi=a*b;
    printf("%d",multi);
}

