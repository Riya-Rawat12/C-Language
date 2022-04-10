//Sum of two matrices
#include <stdio.h>
int main(){
 
    int arr[30][30];
    int arows,acolomn;
    printf("Enter the num of rows and colomn of first array:\n");
    scanf("%d %d",&arows,&acolomn);

    printf("Enter the elements of the first array :\n");
    for(int i=0;i<arows;i++){
        for(int j=0;j<acolomn;j++){
          scanf("%d",&arr[i][j]);  
        }
    }

    int brr[30][30];
    int brows,bcolomn;
    printf("Enter the num of rows and colomn of second array:\n");
    scanf("%d %d",&brows,&bcolomn);

    printf("Enter the elements of the second array :\n");
    for(int i=0;i<brows;i++){
        for(int j=0;j<bcolomn;j++){
          scanf("%d",&brr[i][j]);  
        }
    }

    int sum[30][30];
    for(int i=0;i<arows;i++){
      for(int j=0;j<brows;j++){
       sum[i][j]=arr[i][j]+brr[i][j];
      }
    }

    printf("The new array is :\n");
    for(int i=0;i<arows;i++){
      for(int j=0;j<brows;j++){
        printf("%d ",sum[i][j]);
      }
    }
return 0;
}