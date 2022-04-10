//To find minimu no. from the elememts of array
#include <stdio.h>
int main(){
    int arr[5]={56,12,34,89,92};
    int min;
    min=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("The minimum no. is %d",min);
return 0;
}