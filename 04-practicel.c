#include <stdio.h>
int main(){
    int n=4, prime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
           prime = 0;
           break;
        }
    }
if (prime == 0 && n!=2){
    printf("this is not a prime no.");
}
        else{
            printf("It is a prime no.");
        }
    
return 0;
}