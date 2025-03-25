/*
 _____                 ______             _     _
|  _  |                | ___ \           | |   (_)
| | | |_   _  ___   ___| |_/ / __ _  ___ | |    _ _ __  _   ___  __
| | | | | | |/ _ \ / __| ___ \/ _` |/ _ \| |   | | '_ \| | | \ \/ /
\ \/' / |_| | (_) | (__| |_/ / (_| | (_) | |___| | | | | |_| |>  <
 \_/\_\\__,_|\___/ \___\____/ \__,_|\___/\_____/_|_| |_|\__,_/_/\_\
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t, vxd=10, vxm=30;
    cin >> t;
    int kcxd=vxd*t;
    int kcxm=vxm*t;
    cout << kcxm-kcxd << "\n";
    return 0;
}
