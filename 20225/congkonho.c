#include <stdio.h>
#include <math.h>
int n, k;
int main()
{
    scanf("%d %d", &n, &k);
    int kq=(n+k)%10;
    printf("%d", kq);
    return 0;
}