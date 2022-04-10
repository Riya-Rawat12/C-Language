//Sum of digits 
#include <stdio.h>
int main(){
    int n,r,sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    
    while(n!=0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("The sum of all digits of n is %d",sum);
return 0;
}