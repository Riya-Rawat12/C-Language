#include <stdio.h>
int main(){
    int n=10,i=0,sum=0;
    do{
        sum+=i;
        i++;
    }while(i<=n);
    printf("The sum of first n natural no. is %d\n",sum);
return 0;
}