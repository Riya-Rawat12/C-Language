#include <stdio.h>
float fahrenheit(float C);
int main(){
    float C;
    float F;
    
     printf("Enter the temperature in celsius\n");
    scanf("%f", &C);
    F = fahrenheit(C);
    printf("Temperature in fahrenheit is %f", F);
    
}

float fahrenheit(float C){
    float F;
    F = (C*1.8)+32;
    return F;
}