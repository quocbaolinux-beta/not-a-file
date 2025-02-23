#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <new.h>
int main()
{
    float a, b, c, p, s;
    printf("\nEnter 3 numbers a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    p=(a+c+b)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("\nArea = %0.2f", s);
    getch();
}
