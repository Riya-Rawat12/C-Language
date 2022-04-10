#include <stdio.h>
int main(){
    int exponent,base,expo,power=1;
    double power1=1.0;

    printf("Enter the value of base\n");
    scanf("%d",base);
    printf("Enter the value of exponent\n");
    scanf("%d",exponent);

    expo=exponent;
    if(exponent>0)
    {
    while(exponent!=0){
        power=power*base;
        exponent--;
    }
    printf("%d to the power %d is %d",base,expo,power);
    }

    else{
        while(exponent!=0){
            power1=power1*(1.0/base);
            exponent--;
        }
        printf("%d to the pwer %d is %d\n",base,expo,power1);
    }
return 0;
}