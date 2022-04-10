//Plaindrome or not
#include <stdio.h>
int main(){
    int n,r,s=0,a=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    a=n;

while(n!=0){

    r=n%10;
    s=s*10+r;
    n=n/10;}
    printf("after swapping the no. is %d\n",s);
    
    if(a==s){
        printf("%d is a palindrome",a);
    }
    else{
        printf("%d is not a palindrome",a);
    }

return 0;
}