#include <stdio.h>
int main(){
    int number ;
    printf("Enter the number\n");
    scanf("%d",&number);

    int rem,sum;
    for(int i=0;i<number ;i++)
    {
        rem=number%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }

    if(sum==number)
    {
        printf("\n%d is a perfect number\n",number);
    }
    else{
        printf("%d is not a perfect number\n",number);
    }
return 0;
}