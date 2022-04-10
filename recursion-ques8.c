//QUESTION - Largest element of array using recursion
#include <stdio.h>

int largestElement(int arr[], int n, int max);

int main(){
	
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    
    int arr1[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    int largest;
    largest = largestElement(arr1,n-1,-46);
    printf("The largest element is %d",largest);
    
return 0;
}

int largestElement(int arr[], int n,int max){
    

    
        if(n==0){
            return max;
        }
        
       if(arr[n]>max){
       max=arr[n];
       }
   
    return largestElement(arr,n-1,max);
   
}