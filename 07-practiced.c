#include <stdio.h>
int main(){
    int row=2;
    int coloumn=2;

    int matrix[2][2];

    for(int i=0;i<row;i++){
        for(int j=0;j<coloumn;j++){
            printf("Enter the elements of %d row and %d coloumn\n",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nPrinting the elements\n");
     for(int i=0;i<row;i++){
         printf("\n\n");
        for(int j=0;j<coloumn;j++){
            printf("%d\t",matrix[i][j]);
        
        }
    }

return 0;
}