#include <stdio.h>
void printTable(int *mulTable,int num, int n){
    printf("The multiplication table of %d is :\n",num);
    for(int i=0;i<n;i++){
        mulTable[i] = n*(i+1);
    }
    for(int i=0;i<n;i++){
        printf("%d x %d = %d\n",num,n,mulTable[i]);
    }
    printf("*************************************************************************\n\n");
}
int main(){
    int arr[3][10];
    printTable(arr[0],2,10);
    printTable(arr[1],7,10);
    printTable(arr[2],9,10);
return 0;
}