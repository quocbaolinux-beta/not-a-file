#include <bits/stdc++.h>
using namespace std;
int a, b;
bool isprime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int tongcs(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}
int tichcs(int number) {
    int sum = 0;
    while (number != 0) {
        sum *= number % 10;
        number /= 10;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b;
    for(int i=a; i<=b; i++)
    {
        if(isprime(i)){
            if(tongcs(i)%2==0){
                if(tichcs(i)!=0)
                    cout << i << " ";
            }
        }
    }
    return 0;
}