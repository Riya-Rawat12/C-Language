//QUESTION - WAP to count digits of a given no. using recursion
#include <stdio.h>
int countdig(int n);
int main(){
    int n,count;
    printf("Enter the num\n");
    scanf("%d",&n);
    count=countdig(n);
    printf("The no. of digits are\n");
    printf("%d",count);
return 0;
}

int countdig(int n){
static int count=0;
if(n!=0){
    count++;
    countdig(n/10);
}
return count;
}