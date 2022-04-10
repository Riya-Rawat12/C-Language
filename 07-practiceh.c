#include <stdio.h>
int countpositiveno(int *arr,int n);

int main(){
    int positive_count=0;
    int arr[]={56,-67,89,12,-78,-34};
    positive_count=countpositiveno(arr,6);
    printf("Total no. of positive integers ine the array are %d\n",positive_count);
return 0;
}
int countpositiveno(int *arr,int n){
    int positivecount=0;
    printf("list of positive no. are:\n");
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            printf("%d\n",arr[i]);
            positivecount++;
        }
     }
return positivecount;
}