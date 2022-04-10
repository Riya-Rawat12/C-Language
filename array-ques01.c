//QUESTION - WAP to check whether a digit is repeated for a given no. or not
#include <stdio.h>
int main(){
    int seen [10]={0};
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    int rem;
    while(num>0){
        rem=num%10;
        if(seen[rem]==1)
        break;
        seen[rem]=1;
        num=num/10;
    }

    if(num>0){
        printf("Yes\n");
    }
    else{
        printf("No");
    }
return 0;
}