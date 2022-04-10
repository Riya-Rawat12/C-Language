#include <stdio.h>
int main(){
    int students=4;
    int subjects=5;
    int school=2;

    int marks[4][5][2];

    for(int i=0;i<students;i++){
        for(int j=0;j<subjects;j++){
            for(int k=0;k<school;k++){
            printf("Enter the marks of %d student in subject %d of %d school\n ",i+1,j+1,k+1);
            scanf("%d",&marks[i][j][k]);
            }
        }
    }

     for(int i=0;i<students;i++){
        for(int j=0;j<subjects;j++){
            for(int k=0;k<school;k++){
            printf("The marks of %d student in subject %d of %d school is %d\n",i+1,j+1,k+1,marks[i][j][k]);
            }
        }
    }
return 0;
}