/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n=6;
    for(int i=1;i<=n;i++){
        for(int j=i-9;j<=n;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
         if(k==1||k==3||k==5){
         printf(" *");}
         else{
             printf(" 0");
         }
         
        }
        printf("\n");
    }
    for(int i=4;i<=10;i++){
        for(int j=i- 5;j<=10;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            if(k==1||k==3||k==5||k==7||k==9){
            printf(" *");}
            else{
                printf(" +");
            }
        }
        printf("\n");
    }//next
    
    for(int i=8;i<=15;i++){
        for(int j=i;j<=15;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            if(k==1||k==3||k==5||k==7||k==9||k==11||k==13||k==15){
            printf(" *");}
            else{
                printf(" +");
            }
        }
        printf("\n");
    }
    //next
    
    for(int i=1;i<=6;i++){
        for(int j=1;j<=4;j++){
            printf(" ");
        }
        for(int k=1;k<=12;k++){
            printf(" #");
         
        }
        printf("\n");
    }

    return 0;
}