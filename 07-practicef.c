#include <stdio.h>
int main(){
    // int arr[10];
    // for(int i=0;i<10;i++){
    //     arr[i]=5*(i+1);
    // }
    // for(int i=0;i<10;i++){
    //     printf("5x%d = %d\n",i+1,arr[i]);
    // }
    int arr[10];
    int n;
    printf("multiplication table of ");
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        arr[i]=n*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%d x %d = %d\n",n,i+1,arr[i]);
    }
return 0;
}