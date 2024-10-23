/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    int oddindex=0;
    int evenindex=0;
    int odd[10];
    int even[10];
   
   int arr[]={1,2,3,11,25,26,5,6,7};
   int size=sizeof(arr)/sizeof(arr[0]);
  
   for(int i=0;i<size;i++){
       
       if(arr[i]%2==0){
           even[evenindex]=arr[i];
           evenindex++;
          
          
       }
       else{
           odd[oddindex]=arr[i];
           oddindex++;
       }

   }
    for (int i=0;i<oddindex;i++) {
        printf(" odd=%d ", odd[i]);
    }
    for(int i=0;i<evenindex;i++){
        printf(" even=%d ",even[i]);
    }
    printf("\n");
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("the sorted array=");
    for(int i=0;i<size;i++){
        printf(" %d",arr[i]);
    }

    return 0;
}
