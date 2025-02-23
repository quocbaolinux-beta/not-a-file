#include <stdio.h>
#include <conio.h>
#include <bits/stdc++.h>
int main()
{
    int n;
    int i;
    printf("\nSo phan tu cua day N =  ");
    scanf("%d", &n);
    float *x = (float*)malloc((n+1)*sizeof(float));
    for (int i=1; i<=n; ++i)
    {
        printf("\nX[%d] = ", i);
    }        scanf("%f", x+i);

    for (i=1; i<=n-1; ++i)
        for (int j=i+1; j<=n; ++j)
            if (x[i]>x[j])
        {
            float tg = x[i];

            x[i] = x[j];
            x[j] = tg;
        }
    printf("\nDay sau khi sap xep\n");
    for (i=1; i<=n; ++i)
        printf("%0.2f", x[i]);
    printf("\n\nPress any key to continue.");
    getch();
}
