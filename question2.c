//Entered character is alphabet or not
#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        printf("The entered character is alphabet");
    }
    else{
        printf("Eneterd character is not an alphabet");
    }
return 0;
}