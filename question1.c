//T print no. of notes
#include <stdio.h>
int main(){
    int a=500, b=100, c=10, d=1;
    int amount;

    printf("The total amount is ");
    scanf("%d",&amount);

     int e,f,g,h;
     e= amount/a;
         printf("Total no. of %d notes is %d\n",a,e);
         amount = amount%500;
     f= amount/b;
         printf("total no. of %d notes is %d\n",b,f);
         amount = amount%100;
     g=amount/c;
         printf("Total no. of %d notes is %d\n",c,g);
         amount = amount%10;
     h=amount/1;
         printf("Total no. of %d notes is %d\n",d,h);
     
return 0; 
}