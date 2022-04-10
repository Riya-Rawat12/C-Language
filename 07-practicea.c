#include <stdio.h>
int main(){
    int i = 90;
    int *ptr=&i;
    printf("The value of ptr is %u\n",ptr);
    ptr++;
    printf("The value of ptr is %u\n",ptr);
    ptr--;
    printf("The value of ptr is %u\n",ptr);
    int a=27;
    int *ptr2=&a;
    printf("The value of ptr2 is %u\n",ptr2);
    printf("The value after subtracting both pointer is %u\n",(ptr)-(ptr2));
    (ptr!=ptr2) ? printf("both pointers are not equal"):printf("Both pointers are equal");
return 0;
}