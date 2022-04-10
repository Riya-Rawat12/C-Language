//Entered alphabet is vowel or not
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    
    switch(ch){
    case 'a':
    ch = 'A';
    break;
    case 'e':
    ch = 'E';
    break;
    case 'i':
    ch = 'I';
    break;
    case 'o':
    ch = 'O';
    break;
    case 'u':
    ch = 'U';
    break;
    case 'A':
    ch = 'a';
    break;
    case 'E':
    ch = 'e';
    break;
    case 'I':
    ch = 'i';
    break;
    case 'O':
    ch = 'o';
    break;
    case 'U':
    ch = 'u';
    break;
    default:
    printf("Entered character is not a vowel");
    break;
  }
printf("%c",ch);
return 0;
}