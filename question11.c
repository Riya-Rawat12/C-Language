//To print even e4lememnts of array and forming a new array of those even no.
#include <stdio.h>
int countevenno(int *arr,int n);
int main(){
   int even_no =0;
   int arr[6]={2,7,8,6,3,4};
   countevenno(arr,6);
   
    
return 0;
}

int countevenno(int *arr,int n){
    int evenno=0;
    int even[6];
    int k=0;
    printf("The even no. are :\n");
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
        even[k]=arr[i];
        k++;
        }
    }
    for(int j=0;j<k;j++){
        printf("%d, ",even[j]);
    }
    return evenno;
}