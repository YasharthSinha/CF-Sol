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
    int n,l;
    cin>>n>>l;
    vector<int>arr(n);
    for(int x=0;x<n;x++) cin>>arr[x];
    sort(arr.begin(),arr.end());
    int maxgap= max(arr[0],l-arr[n-1])*2;
    for(int x=1;x<n;x++) maxgap=max((arr[x]-arr[x-1]),maxgap);
    cout.precision(20);
    cout<<maxgap/2.0<<"\n";
    return 0;
}
