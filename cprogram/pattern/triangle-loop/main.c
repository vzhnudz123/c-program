/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("enter an number:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        
        for(int s=1;s<=i;s++){
        printf(" *");
    }
    
   
    printf("\n");
  
    }
    
    
    
    
    for(int i=1;i<=n;i++){
        
     
    
    for(int k=i;k<=n-1;k++){
        printf(" *");
    }
    printf("\n");
  
    }

    return 0;
}