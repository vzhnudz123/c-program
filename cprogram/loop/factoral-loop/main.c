/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,num,sum=0;
    printf("enter number");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum+=i;
        printf("%d\n",i);
}
printf("%d",sum);
    return 0;
}