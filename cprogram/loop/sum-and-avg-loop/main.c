/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int i,num,limit;
    int sum=0;
    float average;
    printf("enter the limit");
    scanf("%d",&limit);
  
    for(i=1;i<=limit;i++){
        printf("enter 10 numbers");
        scanf("%d",&num);
        sum+=i;
        average=sum/2;
    }
    printf("%d\n",sum);
    printf("%.2f",average);
    

    return 0;
}
