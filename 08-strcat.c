#include <stdio.h>
#include <string.h>
int main(){
    char st1[]="Hello ";
    char st2[]="You";
    strcat(st1,st2);
    printf("Now the st1 become %s",st1);
return 0;
}