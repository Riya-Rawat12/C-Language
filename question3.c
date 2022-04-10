//Swaping of no.
#include <stdio.h>
int main(){
    int n,r,s=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);

while(n!=0){

    r=n%10;
    s=s*10+r;
    n=n/10;}
    printf("after swapping the no. is %d",s);
return 0;
}