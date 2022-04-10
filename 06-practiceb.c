#include <stdio.h>
void vari(int *a);
int main(){
int i=9;
printf("The value of i is %d\n",i);
vari(&i);
printf("The value of i after calling function is %d\n",i);
return 0;
}

void vari(int *a){
    *a=10*(*a);
}