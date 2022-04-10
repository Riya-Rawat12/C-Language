//QUESTION - WAP to print the sum of elements of a given num.
#include <stdio.h>
int addDigit(int n);
int main(){
    int n,sum=0;
    printf("Enter the num\n");
    scanf("%d",&n);
    sum=addDigit(n);
    printf("The sum of num is :%d",sum);
return 0;
}

int addDigit(int n){
    if(n==0){
        return 0;
    }
    return (n%10) + addDigit(n/10);
}