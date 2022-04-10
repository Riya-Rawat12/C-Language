//To print sum of elements of array
#include <stdio.h>
int main(){
    int arr[5]={2,5,8,9,1};
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    
        printf("The sum of elements of array is %d\n",sum);
return 0;
}