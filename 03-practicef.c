#include <stdio.h>
int main()
{
    int a, b, c, d;

    printf("Enter 4 numbers");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if ((a > b) && (a > c) && (a > d))
    {
        printf("a is the largest no.\n");
    }
    else if ((b > a) && (b > c) && (b > d))
    {
        printf("b is the largest no.\n");
    }
    else if ((c > a) && (c > a) && (c > d))
    {
        printf("c is the largest no.\n");
    }
    else if ((d > a) && (d > c) && (d > b))
    {
        printf("d is the largest no.\n");
    }
    return 0;
}