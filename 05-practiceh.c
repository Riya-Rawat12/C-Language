#include <stdio.h>
int fib(int n);
    int main(){
        int num,m=0;
    printf("Enter the number\n");
    scanf("%d",&num);
   
    printf("The fibonacci series for the given no. is ");
    for(int i=1;i<=num;i++){
        printf("%d",fib(m));
        m++;
    }
    
return 0;
}

int fib(int n){
    
    if(n==0 || n==1){
        return n;
    }
    
    int result;
    result = fib(n-1) + fib(n-2);
    
    return result;
}