#include <stdio.h>
void printadd(int a){
printf("the address of a is %u\n",&a);}
int main(){
    int i=7;
    printf("The value of i is %d\n",i);
    printadd(i);
    printf("The address of i is %u",&i);
return 0;
}