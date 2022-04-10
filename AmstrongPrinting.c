#include <stdio.h>
int main(){
    int q,count,num,rem,result,cnt,mul;
    rem=0,mul=1,result=0,count=0;
    printf("Enter the num\n");
    scanf("%d",&num);

    q=num;

    while(q!=0){
        q=q/10;
        count++;
    }
    q=num;
    cnt=count;
    while(q!=0){
        rem=q%10;
        while(cnt!=0){
            mul=mul*rem;
            cnt--;
        }
        result=result+mul;
        cnt=count;
        q=q/10;
        mul=1;
    }

    if(result==num)
    {
    printf("%d is an Amstrong number\n",num);
    }
    else
    {
    printf("%d is not an Amstrong number\n",num);
    }
return 0;
}