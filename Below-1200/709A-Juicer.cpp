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
    int n,b,d,sum=0,ans=0,temp;
    cin>>n>>b>>d;
    for(int x=0;x<n;x++){
        cin>>temp;
        if(temp<=b){
            sum+=temp;
            if(sum>d){
                sum=0;
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
