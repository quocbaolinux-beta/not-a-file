#include <bits/stdc++.h>

using namespace std;
long long maxa,minb,n,i,a[1000001],b[1000001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    freopen("SINT.INP","r",stdin);
    freopen("SINT.OUT","w",stdout);
    //Đọc dãy số a và b
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i]>>b[i];
    //Tìm giá trị lớn nhất của dãy a
    //Tìm giá trị nhỏ nhất của dãy b
    maxa=a[1];
    minb=b[1];
    for(i=2;i<=n;i++)
    {
        maxa=max(maxa,a[i]);
        minb=min(minb,b[i]);

    }
    //Ghi kết quả
    if(maxa<=minb)
        for(i=maxa;i<=minb;i++)
            cout<<i<<endl;
    else
        cout<<"$";
    return 0;
}
