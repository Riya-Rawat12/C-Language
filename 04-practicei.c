#include <stdio.h>
int main(){
    int n=10, i=0,sum=0;
  
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("The sum of first n natural no. is %d",sum);
return 0;
}