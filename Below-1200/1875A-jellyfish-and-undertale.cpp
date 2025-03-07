#include<bits/stdc++.h>
#define ll                    long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>a>>b>>n;
        int num;
        ll ans=b;
        for(int x=0;x<n;x++){
            cin>>num;
            ans+=min(num,a-1);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
