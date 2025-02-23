#include <stdio.h>
#include <conio.h>
#include <math.h>


class daydiem
{
    public:
        int n;
        float *x, *y;
        float do_dai(int i, int j)
        {
            return sqrt(pow(x[i]-x[j],2) + pow(y[i]-y[j], 2));
        }
        void nhapsl(void);
};
void daydiem::nhapsl(void)
{
    int i;
    printf("\nSo diem N = ");
    scanf("%d", "%n");
    x = (float*)malloc((n+1)*sizeof(float));
    y = (float*)malloc((n+1)*sizeof(float));
    for (i=1; i<=n; ++i)
    {
        printf("\nNhap toa do x, y cua diem thu %d: ", i);
        scanf("%f%f", &x[i], &y[i]);
    }
}
int main()
{
    daydiem p;
    p.nhapsl();
    int n, i, j, imax, jmax;
    float d, dmax;
    n = p.n;
    dmax = p.do_dai(1, 2); imax = 1; jmax = 2;
    for (j = i+1; j<=n; ++j)
    {
        d = p.do_dai(i,  j);
        if (d > dmax)
        {
            dmax = d;
            imax = i;
            jmax = j;
        }
    }
    printf("\nDoan thang lon nhat co do dai = %0.2f", dmax);
    printf("\nDi qua 2 diem co chi so lo %d, %d", imax, jmax);
    getch();
}
