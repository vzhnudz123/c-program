/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void sum();
void main(){
    //printf("\nn natural num");
    sum();
}

//multi

void sum(){
    int i;
    int n=10;
    int sum=0;
    for(i=1;i<=n;i++){
        printf("%d\n",i);
        sum+=i;
    }
    printf("%d",sum);
}

