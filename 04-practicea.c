#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    while(a>=10 && a<=20){
        printf("Natural no. between 10 to 20 is %d\n",a);
        a++;
    }
return 0;
}