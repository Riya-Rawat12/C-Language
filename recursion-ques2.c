//QUESTION - WAP sum of first n digits 
#include <stdio.h>
int funAdd(int n);
int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("The sum of first %d num is %d ",n,funAdd(n));
return 0;
}

int funAdd(int n){
    int sum;
    sum=0;
    sum+=n*(n+1)/2;
    return sum;
}