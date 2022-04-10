//print the max no form the array elements
#include <stdio.h>
int main(){
    int arr[5]={56,12,34,89,92};
    int max;
    max=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("The maximum no. is %d",max);
return 0;
}