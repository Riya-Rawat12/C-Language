#include <stdio.h>
int main(){
    int n=14,i=2,prime=1;
    do{
        if(n%i==0){
            prime = 0;
            break;
        } 
        i++;
    }while(i<n);
        if(prime == 0 ){
            printf("This is not  a prime no.");
        }
        else{
            printf("This is a prime no.");
        }
return 0;
}