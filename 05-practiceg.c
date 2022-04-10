#include <stdio.h>
float fahrenheit(float C);
int main(){
    float celsius;

     printf("Enter the temperature in celsius\n");
    scanf("%f", &celsius);

    printf("Temperature in fahrenheit is %f", fahrenheit(celsius));
    
}

float fahrenheit(float C){
    float F;
    F = (C*1.8)+32;
    return F;
}