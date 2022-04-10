#include <stdio.h>
#define N 5
int main(){
    int arr[5];
    int *p;
    printf("Enter the %d elements of the array\n",N);
    for(p=arr;p<=arr+N-1;p++){
        scanf("%d",p);
    }

    printf("Enter the %d elements of array in reverse order\n",N);
    for(p=arr+N-1;p>=arr;p--){
        printf("%d ",*p);
    }
return 0;
}