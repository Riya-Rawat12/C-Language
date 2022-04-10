#include <stdio.h>
int main(){
    char ch;
    // 97-112 = a-z
    printf("Enter the character\n");
    scanf("%c",&ch);
    if (ch>=97 && ch<=112)
    {
        printf("Character is lower case");
    }
    else{
        printf("Character is not lower case");
    }
    
return 0;
}