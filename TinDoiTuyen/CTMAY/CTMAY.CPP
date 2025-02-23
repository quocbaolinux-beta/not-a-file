#include <bits/stdc++.h>
#define N 1000
#define ll long long

using namespace std;
ll n,res;

ll d[N+2];
struct donhang
{
    int l,r,c;

};
donhang a[N+2];
bool cmp(donhang X, donhang Y)
{
    if (X.l==Y.l) return X.r<Y.r;
    return X.l<Y.l;
}
int main()
{
   freopen("ctmay.inp","r",stdin);
   freopen("ctmay.out","w",stdout);
   cin>>n;
   for (int i=1;i<=n;i++) cin>> a[i].l>>a[i].r>>a[i].c;
   sort(a+1,a+n+1,cmp);
   d[1]=a[1].c;
   res=d[1];
   for (int i=2;i<=n;i++)
   {
       ll maxd=0;
       for (int j =1;j<i;j++)
        if (a[j].r<=a[i].l && maxd<d[j]) maxd=d[j];
       d[i]=maxd+a[i].c;
       if (res<d[i]) res=d[i];
   }
   cout<<res;
    return 0;
}
