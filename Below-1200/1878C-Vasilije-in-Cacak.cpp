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
    ll t;
    cin>>t;
    while(t--){
        ll n,k,x;
        cin>>n>>k>>x;
        ll s1 = n*(n+1)/2,s2=k*(k+1)/2,s3=s1-(n-k)*(n-k+1)/2;
        /*
        s1 is sum from 1 to n 
        s2 is sum from 1 to k which is min possible sum
        s3 is sum from k to n which is max sum 
        */
        if(x>=s2 && x<=s3) cout<<"YES\n"; // we can deduce that x should be in b/w min and max sum of elements. 
        else cout<<"NO\n";
    }
    return 0;
}
