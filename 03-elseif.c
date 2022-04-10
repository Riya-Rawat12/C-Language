#include <stdio.h>
int main(){
    int a;
    printf("Enter your no.\n");
    scanf("%d",&a);
    if(a==5){
        printf("Your no. is odd\n");
    }
    else if (a==6){
        printf("Your no. is even\n");
    }
    else if(a==2){
    printf("Your no. is an integer\n");
    }
else{
printf("No. can be anything\n");
}
    
return 0;
}