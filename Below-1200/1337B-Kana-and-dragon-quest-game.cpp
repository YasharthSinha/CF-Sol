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
        ll x,n,m;
        cin>>x>>n>>m;
        while(n && x>20){
            n--;
            x=x/2+10;
        }
        m*=10;
        if(m>=x) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
