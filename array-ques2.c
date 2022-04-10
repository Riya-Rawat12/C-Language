//QUESTION - Multiplication of two matrices
#include <stdio.h>
int main(){
    int MAX;
    int arr[MAX][MAX];
    int arows, acoloumn;
    printf("Enter the rows and coloum of first matrix :");
    scanf("%d %d",&arows, &acoloumn);

    printf("Enter the elements of first matrix : \n ");
    for(int i=0;i<arows;i++){
        for(int j=0;j<acoloumn;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int brows, bcoloumn;
    printf("Enter the rows and coloum of second matrix :");
    scanf("%d %d",&brows, &bcoloumn);

    printf("Enter the elements of second matrix : \n ");
    for(int i=0;i<brows;i++){
        for(int j=0;j<bcoloumn;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int product[MAX][MAX];
    int sum=0;

    for(int i=0;i<arows;i++){
        for(int j=0;j<bcoloumn;j++){
            for(int k=0; k<brows;k++){
                sum+=arr[i][k]*arr[k][j];
            }
            product[i][j]=sum;
            sum=0;
        }
    }
    
     printf("Resultant matrix is : \n");
    for(int i=0;i<arows;i++){
        for(int j=0;j<acoloumn;j++){
           printf("%d\n",product[i][j]);
        }
    }
return 0;
}