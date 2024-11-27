#include<bits/stdc++.h>
#define ll                    long long int
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   1000000007
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(arr)              arr.begin(),arr.end()
#define mid(l,h)              (l+(h-l)/2)
#define eb                    emplace_back
#define ull                   unsigned long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi arr(n);
        for(int x=0;x<n;x++) cin>>arr[x];
        ll ans=0;
        int maxpos=arr[0];
        for(int x=1;x<n;x++){
            if((arr[x]<0 && maxpos>0) || (arr[x]>0 && maxpos<0)) {
                ans+=maxpos;
                maxpos=arr[x];
            }
            else{
                maxpos=max(maxpos,arr[x]);
            }
        }
        ans+=maxpos;
        cout<<ans<<"\n";
    }
    return 0;
}
