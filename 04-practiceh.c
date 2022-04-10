#include <stdio.h>
int main(){
    int n=10,i,sum=0;
    
    for(i=0;i<=n;i++){
        sum+=i;
    }
    printf("The sum of first n natural no. is %d",sum);
return 0;
}