#include <bits/stdc++.h>
using namespace std;

float dientich(int a, int b, int c) {
	float p = (a+b+c) / 2.0;
	return sqrt(p*(p - a)*(p - b)*(p - c));
}

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(3) << (a*b*c)/4*(dientich(a, b, c));
    return 0;
}
