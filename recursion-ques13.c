//To find the LCM of two num using recursion
#include <stdio.h>
int findLCM(int a, int b);
int main(){
    int a,b;
    printf("the values of a and b are \n");
    scanf("%d%d",&a,&b);
    int lcm=findLCM(a,b);
    printf("The lcm of %d and %d is %d",a,b,lcm);
    
return 0;
}

int findLCM(int a, int b){
    static int multiple ;
    multiple+=b;
    if(multiple%a==0 && multiple%b==0){
        return multiple;
    }
    else{
        return findLCM(a,b);
    }
}