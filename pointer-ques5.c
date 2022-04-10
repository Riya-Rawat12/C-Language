#include <stdio.h>
int main(){
    int n;
    int arr[25];
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    printf("The elements of array are\n");
    for(int i=0;i<n;i++){
        printf("%d",*(arr+i));
    }

return 0;
}