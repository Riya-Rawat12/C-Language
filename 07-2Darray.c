#include <stdio.h>
int main(){
    int students=4;
    int subjects=5;

    int marks[4][5];

    for(int i=0;i<students;i++){
        for(int j=0;j<subjects;j++){
            printf("Enter the marks of %d student in subject %d\n ",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }

     for(int i=0;i<students;i++){
        for(int j=0;j<subjects;j++){
            printf("The marks of %d student in subject %d is %d\n",i+1,j+1,marks[i][j]);
        }
    }
return 0;
}