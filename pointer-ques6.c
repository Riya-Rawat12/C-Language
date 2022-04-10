#include <stdio.h>
#include<stdlib.h>
typedef struct boxes
{
    int length;
    int breadth;
    int height;
    int volume;
}boxes;
int main()
{
    int n;
    scanf("%d\n",&n);
    boxes b;
    for(int i=0;i<n;i++){
    scanf("%d",&b.length);
    scanf("%d",&b.breadth);
    scanf("%d",&b.height);
   

    if(b.height>41){
        continue;
    }
    else{
        return  b.volume = b.length*b.breadth*b.height;
        printf("%d\n",b.volume);
    }
}
return 0;
}
