#include <stdio.h>
long int addTwoNum(long int *n, long int *N);
int main(){
    long int a,b,sum;
    printf("Enter the value of two numbers\n");
    scanf("%ld%ld",&a,&b);
    
    sum=addTwoNum(&a,&b);
    printf("The summ of the two num is %ld",sum);

return 0;
}


long int addTwoNum(long int *n, long int *N){
    long int sum;
    sum=*n+*N;
    return sum;
}