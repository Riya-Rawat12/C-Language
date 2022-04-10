// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("Enter the values of a and b\n");
//     scanf("%d%d",&a,&b);

//     while(b!=0){
//         a++;
//         b--;
//     }

//     printf("Sum of a and b is %d",a);
// return 0;
// }

#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the values of a and b\n");
    scanf("%d%d",&a,&b);

    if(b>0){
    while(b!=0){
        a++;
        b--;
    }
    }
    else if(b<0){
        while(b!=0){
            a--;
            b++;
        }
    }

    printf("Sum of a and b is %d",a);
return 0;
}