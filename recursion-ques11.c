//WAP changing decimal to binary no.
#include <stdio.h>
long int findBinary(int deciNum);
int main(){
    int n;
    printf("To convert decimal num into binary num\n\n");
    printf("****************************************************************\n\n");
    printf("Enter the value of decimal num :");
    scanf("%d",&n);
    printf("The binary num of %d is %ld",n,findBinary(n));

return 0;
}

long int findBinary(int deciNum){
    int binNum;
    if (deciNum==0)
    binNum=0;
    else
    binNum = deciNum%2+10*(findBinary(deciNum/2));
}