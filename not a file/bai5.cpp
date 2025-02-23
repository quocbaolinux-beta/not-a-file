#include <stdio.h>
#include <conio.h>
#include <iostream>
int main()
{
    int n;
    std::cout << "\nSo phan tu cua day N = ";
    scanf("%d", &n);
    float s=0.0;
    for(int i=1; i<=n; i++)
    {
        s+=float(i+1)/float(i);
    }
    printf("S = %0.2f", s);
    getch();
}