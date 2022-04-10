#include <stdio.h>
int main()
{
    int i = 45, *j, **k, ***l;
    j = &i;
    k = &j;
    l = &k;
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n",**k);
    printf("The value of i is %d\n",***l);
    printf("The value of j is %d\n",j);
    printf("The value of j is %d\n",*k);
    printf("The value of j is %d\n",**l);
    printf("The value of k is %d\n" ,k);
    printf("The value of k is %d\n" ,*l);
    printf("The value of l is %d\n",l);
    printf("The address of i is %u\n",&i);
    printf("The address of i is %u\n",j);
    printf("The address of i is %u\n",*k);
    printf("The address of i is %u\n",**l);
    printf("The address of j is %u\n",&j);
    printf("The address of j is %u\n",k);
    printf("The address of j is %u\n",*l);
    printf("The address of k is %u\n",&k);
    printf("The address of k is %u\n",l);
    printf("The address of l is %u\n",&l);

    
return 0;
}