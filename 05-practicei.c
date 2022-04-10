#include <stdio.h>
int sum(int a);

int main(){
    int n;
    printf("Enter the number\n ");
    scanf("%d",&n);
    printf("Sum of first %d natural no. is %d",n,sum(n));
    
return 0;
}

int sum(int a){
    int result;
    result = a*(a+1)/2;
    return result;
}