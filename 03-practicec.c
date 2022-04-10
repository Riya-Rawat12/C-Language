#include <stdio.h>
int main(){
    int maths, science, english;
   
printf("Enter the marks of three subject\n");
scanf("%d%d%d",&maths,&science,&english);

int percentage;
percentage = (maths+science+english)/3;
printf("Enter percentage %d\n", percentage);

if((percentage>=40) && (maths,science,english>=33)){
    printf("you are pass\n");
}
else{
    printf("you are fail\n");
}

return 0;
}