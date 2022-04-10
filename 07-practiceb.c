#include <stdio.h>
// void printArray(int *ptr,int n){
//     for(int i=0;i<n;i++){
//     printf("The value of %d element is %d\n",i+1,*(ptr+i));}
// }
void printArray(int ptr[],int n){
    for(int i=0;i<n;i++){
        printf("The value of %d element is %d\n",i+1,ptr[i]);
    }
    ptr[3]=678;
}
int main(){
    int arr[]={23,1116,67,88,90,45,28,85};
    printArray(arr,8);
    printf("%d",arr[3]);
return 0;
}