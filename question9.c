//If there is 6 as a element in array then chnage is by 8
#include <stdio.h>
int main(){
    // int arr[7]={3,7,9,6,4,2,5};
    // arr[3]=8;
    // for(int i=0;i<7;i++){
    // printf("Values of array are %d\n",arr[i]);
    // }
    int arr[5]={5,6,8,9,2};
    for(int i=0;i<5;i++){
        if(arr[i]=6){
            arr[i]=8;
        }
    }
    for(int i=0;i<5;i++){
        printf("The values of array are %d\n",arr[i]);
    }
    
return 0;
}