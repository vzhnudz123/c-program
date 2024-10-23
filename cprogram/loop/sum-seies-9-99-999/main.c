/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int sum=0;
    int i,n,e;
    printf("enter a number");
    scanf("%d",&n);
    
    for(i=1;i<=n;++i){
        for(e=1;e<=i;e++){
        printf("%d",n);
        sum+=n;
        }
        printf("\n");
    }
    printf("sum is::%d\n",sum);

    return 0;
}