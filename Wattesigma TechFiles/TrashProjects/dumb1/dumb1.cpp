#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    float a, b, c, p, s;
    printf("\nNhap so a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("\nDien tich = %0.2f", s);
    printf("\n\n\n\n\n\nPress any key to exit...");
    getch();
}
