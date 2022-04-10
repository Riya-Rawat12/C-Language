#include <stdio.h>
int main(){
    int r;
    float pi=3.14;
    printf("enter the value of r\n");
    scanf("%d",&r);
    float area = pi*r*r ;
    printf("area of the circle id %f\n",area);
    int h=4;
    int vol=pi*r*r*r*h;
    printf("volume o fthe circle is %d\n",vol );
return 0;
}