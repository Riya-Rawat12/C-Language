//QUESTION - To print fibbonacci series
#include <stdio.h>
int fib(int n);
int main(){
    int num,m=0;
    printf("Enter the value of num\n");
    scanf("%d",&num);

    printf("The fibbonacci series of the given num is :\n");
    for(int i=0;i<=num;i++){
        printf("%d,",fib(m));
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
