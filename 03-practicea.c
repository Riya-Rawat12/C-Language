#include <stdio.h>
int main(){
    int marks;
    printf("Enter your marks(40-100)\n");
    scanf("%d",&marks);

if(marks>=90 && marks<=100){
printf("your grade is A\n");
}
else if (marks>=80 && marks<=89){
    printf("your grade is B\n");
}
else if (marks>=70 && marks<=79){
    printf("your grade is C\n");
}
else if (marks>=60 && marks<=69){
    printf("your grade is D\n");
}
else if (marks>=50 && marks<=59){
    printf("your grade is E\n");
}
else if (marks>=40 && marks<=49){
    printf("your grade is F\n");
}
else
printf("you are fail");
return 0;
}