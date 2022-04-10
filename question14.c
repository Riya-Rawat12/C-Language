//Sorting of array 
#include <stdio.h>
int main(){
    int arr[5]={9,4,2,7,6};
    
    printf("The new rearranged array is :\n");
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++)
            if(arr[i]>arr[j]){
                int temp=0;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            printf("%d,",arr[i]);
    }


return 0;
}