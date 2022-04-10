// QUESTION - WAP to print the elements of array using recursion
#include <stdio.h>
int arrelements(int *arr, int n);
int main(){

    int n;
    int arr[50];
    printf("Enter the size of element\n");
scanf("%d",&n);

printf("Enter the elements of the arrray\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("The elements of array are \n");
    arrelements(arr,n);

return 0;
}

int arrelements(int *arr, int n){

for(int i=0;i<n;i++){
    printf("%d,",arr[i]);
}

return arr;
}