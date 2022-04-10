#include <stdio.h>
void printTable(int *mulTable,int num, int n){
    printf("The multiplication table of %d is :\n",num);
    for(int i=0;i<n;i++){
        mulTable[i] = num*(i+1);
        printf("%d x %d = %d\n",num,i,mulTable[i]);
    }
    printf("*************************************************************************\n\n");
}
int main(){
    int n,m,num;
    scanf("%d\n%d\n%d",&n,&m,&num);
    int arr[n][m];
    for(int i=0;i<n;i++){
       printTable(arr[i],num,n);
    }
    
return 0;
}