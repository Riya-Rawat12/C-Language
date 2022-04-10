//QUESTION - WAP to print first 50 natural num 
#include <stdio.h>
int fun(int n);
int main(){
    int n=1;
    printf("The first 50 natural no. are ");
    fun(n);
    printf("\n\n");
return 0;
}

int fun(int n){
    if(n<=50){
        printf("%d, ",n);
        fun(n+1);
    }
}