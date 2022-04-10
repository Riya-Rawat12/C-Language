//WAP toc check whether a no. is prime or not
#include <stdio.h>
int primeNum(int num, int i);
int main(){
    int num,n;
    printf("To fnd the prime no.\n");
    printf("******************************\n");
    printf("Enter the prime no.\n");
    scanf("%d",&num);
    n=num/2;
    int primeNo;
    primeNo = primeNum(num,n);
    if(primeNo==1)
        printf("The entered num is a prime num\n");
    
    else
        printf("The entered num is not a prime num\n");
    
    
return 0;
}

int primeNum(int num, int i){
    if(i==1){
    return 1;}
    else if(num%i==0){
        return 0;}
        else{
            return primeNum(num,(i-1));
        }     
}