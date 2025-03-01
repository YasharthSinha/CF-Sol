#include<bits/stdc++.h>
#define ll                    long long int
#define vi                    vector<int>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        int ans=s;
        if(s<10){
            cout<<s<<"\n";
            continue;
        }
        else{
            while(s>=10){
                int div=s/10;
                s%=10;
                s+=div;
                ans+=div;
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}
