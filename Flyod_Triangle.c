#include <stdio.h>
int main(){
    int rows,n;
    printf("Enter the no. of rows\n");
    scanf("%d",&rows);
    n=1;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }

return 0;
}