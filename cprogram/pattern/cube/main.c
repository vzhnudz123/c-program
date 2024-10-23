/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,limit;
    int cube=0;
    printf("enter a limit");
    scanf("%d",&limit);
    
    for(i=1;i<=limit;i++){
        cube+=i;
        printf("numberis %d and cube is %d\n",i,i*i*i);
        
    }
    //printf("%d",multi);
    

    return 0;
}