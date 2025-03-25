#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    char characters[1000];
    printf("Enter a string (<=1000 characters): ");
    scanf("%s", characters);
    printf("You just entered a string: %s.", characters);
    return 0;
}
