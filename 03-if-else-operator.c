#include <stdio.h>
int main(){
    int age;
    //if we use a vippass i.e. if vippass =1 then any age person can drive --> this because in c any no. except 0 is considered as true condition
    int vippass = 0;
    vippass = 1 ;
    printf("Enter the age:\n");
    scanf("%d",&age);

    if((age <=75 && age>=18) || (vippass==1)){
        printf("You can drive");
    }
    else{
        printf("You cannot drive");

    }
return 0;
}