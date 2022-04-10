#include <stdio.h>
int main(){
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);

    int sum,carry;
    while(b!=0){
        sum=a^b;
        carry=(a&b)<<1;
        a=sum;
        b=carry;
    }

    printf("The sum of a and b is %d",a);
return 0;
}