#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main(){

 goodmorning();
return 0;
}

void goodmorning(){
    printf("Good Morning people\n");
    goodafternoon();
}
void goodafternoon(){
    printf("Good Afternoon people\n");
    goodnight();
}
void goodnight(){
    printf("Good Night people\n");
}