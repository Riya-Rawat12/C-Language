#include <stdio.h>
int main(){
    int a,b,sum=0;
    int *ptr1;
    int *ptr2;

    printf("Enter the value of ptr1 and ptr2\n");
    scanf("%d%d",&a,&b);

    ptr1=&a;
    ptr2=&b;
    sum=*ptr1+*ptr2;

    printf("the sum of both the pointer is %d",sum);
return 0;
}