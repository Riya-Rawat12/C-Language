//To replace any element of array with 8
#include <stdio.h>
int main(){
    int arr[6]={2,5,8,3,9,1};
    int n;
    scanf("%d",&n);
        if(n<6){
            arr[n]=8;
            arr[6]=arr[n];
        }
    
    for(int i=0;i<6;i++){
        printf("The elements of array are %d\n",arr[i]);
    }
return 0;
}