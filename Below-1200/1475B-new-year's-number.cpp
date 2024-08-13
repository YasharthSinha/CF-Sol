#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll mod=n%2020,div=n/2020;
        if(mod<=div) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
