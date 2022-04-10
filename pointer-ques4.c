#include <stdio.h>
int main(){
    int a,b;
    int max;
    printf("enter the two num \n");
    scanf("%d%d",&a,&b);

    max=a;
    if(b>max){
        max=b;
    }
    int *ptr;
    ptr=&max;
    printf("The largest num is %d",*ptr);

return 0;
}