#include <stdio.h>
int main(){
    int num,q,rem=0,fact=1,result=0;

    printf("Enter the number\n");
    scanf("%d",&num);
    q=num;
    while(q!=0){
        rem=q%10;
        for(int i=1;i<=rem;i++){
            fact=fact*i;
        }
        result=result+fact;
        fact=1;
        q=q/10;
        
    }

    if(result==num)
    {
        printf("%d is a strong number\n",num);
    }
    else{
        printf("%d is not a strong number\n",num);
    }
return 0;
}