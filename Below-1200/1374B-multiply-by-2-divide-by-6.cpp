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
        if(n==1){
            cout<<"0\n";
            continue;
        }
        int ans=0;
        while(n>1){
            if(n%6==0)n/=6;
            else n*=2;
            ans++;
        }
        if(ans==0 || n!=1) cout<<"-1\n";
        else cout<<ans<<"\n";
    }
    return 0;
}
