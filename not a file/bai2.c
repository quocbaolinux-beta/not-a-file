#include <stdio.h>
#include <conio.h>
#include <math.h>
float x[100], y[100];
float length(int i, int j)
{
    return sqrt(pow(x[i]-x[j], 2)+pow(y[i]-y[j], 2));
}
void input(int n)
{
    int i;
    for(i=1; i<=n; i++)
    {
        printf("\nNhap toa do x, y cua diem thu %d: ", i);
        scanf("%f%f", &x[i], &y[i]);
    }
}
int main()
{
    int n, i, j, imax, jmax;
    float d, dmax;
    printf("\nSo diem N = ");
    scanf("%d", &n);
    input(n);
    dmax = length(1, 2); imax = 1; jmax = 2;
    for(i=1; i<=n-1; i++){
        for(j=i+1; j<=n; j++)
        {
            d=length(i, j);
            if(d>dmax)
            {
                dmax=d;
                imax=i;
                jmax=j;
            }
        }
    }
    printf("\nDoan thang lon nhat co do dai = %0.2f", dmax);
    printf("\nDi qua 2 diem co chi so la %d, %d", imax, jmax);
    getch();
} 