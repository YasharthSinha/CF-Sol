#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,k;
    cin>>n>>k;
    if(k<=(n+1)/2) cout<<k*2-1<<"\n";
    else cout<<(k-(n+1)/2)*2<<"\n";
    return 0;
}
