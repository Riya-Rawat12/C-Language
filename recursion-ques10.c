//WAP to find factorial of a no.
#include <stdio.h>
int factorial(int n);
int main(){
    int n,fact;
    printf("To find the factorial of a num.\n");
    printf("------------------------------------------------------\n");
    printf("Enter the no. which need to be factorised:\n");
    scanf("%d",&n);
   
    printf("The factorial of %d is %d\n",n,factorial(n));
    
return 0;
}

int factorial(int n){
   
    if(n==0 || n==1){
        return 1;
    }
    else {
        return factorial(n-1)*n;
    }
    
}