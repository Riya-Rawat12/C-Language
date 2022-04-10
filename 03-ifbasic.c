#include <stdio.h>
int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);

    if(a%2==0){
        printf("The number is an even number\n",a);
    }
    else{
        printf("The number is an odd number\n",a);
    }
return 0;
}