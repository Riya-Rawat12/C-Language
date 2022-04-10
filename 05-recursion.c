#include <stdio.h>
int factorial (int a);
int main(){
    int a ;
    scanf("%d",&a);
    printf("The value of factorial %d is %d",a,factorial(a));
return 0;
}

int factorial (int a){
    if(a==0 || a==1){
        return 1;
    }
    else{
        return factorial(a-1)*a;
    }
}