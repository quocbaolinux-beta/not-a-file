#include <bits/stdc++.h> 
using namespace std; 

int binaryToDecimal(int n) 
{ 
	int num = n; 
	int dec_value = 0; 
	int base = 1; 
	int temp = num; 
	while (temp) { 
		int last_digit = temp % 10; 
		temp = temp / 10; 
		dec_value += last_digit * base; 
		base = base * 2; 
	} 
	return dec_value; 
} 
int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int a, b;
    cin >> a >> b;
	cout << binaryToDecimal(a) << endl << binaryToDecimal(b) << endl; 
    return 0;
}
