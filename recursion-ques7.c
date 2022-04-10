//QUESTION - WAP to find GCD of two num.
#include <stdio.h>
int GCD(int a, int b);
int main(){
    int a,b;
    int gcd;
    printf("Enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    gcd=GCD(a,b);
    printf("The GCD of the %d and %d is : %d",a,b,gcd);
    
return 0;
}

int GCD(int a, int b){
    while(a!=b){
        if(a>b){
            return GCD(a-b, b);
        }
        else
        return GCD(a, b-a);
    }
    return a;
}