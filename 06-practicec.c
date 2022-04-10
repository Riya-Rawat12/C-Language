#include <stdio.h>
void sumAndAvg(int a,int b,int *sum,float *avg){
    *sum=a+b;
    *avg=(float)*sum/2;
}
int main(){
    int x=7,y=8,sum;
    float avg;
    sumAndAvg(x,y,&sum,&avg);
    printf("The sum of x and y is %d\n",sum);
    printf("The avg of x and y is %f\n",avg);
return 0;
}