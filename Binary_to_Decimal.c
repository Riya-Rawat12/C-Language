#include <stdio.h>
int main(){
    int binary,decimal=0,rem,base=1,num;

    printf("Enter the binary no.\n");
    scanf("%d",&num);

    binary=num;

    while(binary!=0){
        rem=binary%10;
        decimal=decimal+rem*base;
        binary=binary/10;
        base=base*2;
        
    }

    printf("The decimal no. of %d is %d",num,decimal);
return 0;
}