#include <bits/stdc++.h>
#define int long long
#define double long double
using namespace std;
string to_upper(string s){
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] -= 32;
		}
	}
	return s;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string n;
    cin >> n;
    cout << to_upper(n);
    return 0;
}
