#include <stdio.h>
void display(); // function prototype
int main()
{
    int a;
    printf("intitializing display function\n");
    display();
    printf("display function finished its work\n");
    return 0;
}

void display()
{
    printf("This is display\n");
}