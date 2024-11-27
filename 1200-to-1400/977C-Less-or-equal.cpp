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
    int n,k;
    cin>>n>>k;
    vi arr(n);
    for(int x=0;x<n;x++) cin>>arr[x];
    sort(all(arr));
    if(k==0 && arr[0]>1) cout<<"1\n";
    else if(k==0 && arr[0]==1) cout<<"-1\n";
    else if(k<=n-1){
        if(arr[k]!=arr[k-1]) cout<<arr[k-1]<<"\n";
        else cout<<"-1\n";
    }
    else if(k==n) cout<<arr[k-1]<<"\n";
    return 0;
}
