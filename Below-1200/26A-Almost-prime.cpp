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
    int n;
    cin>>n;
    vector<bool>prime(3001,true);
    for(int x=2;x*x<=3001;x++){
        if(prime[x]==true){
            for(int y=x*x;y<=3001;y+=x) prime[y]=false;
        }
    }
    int ans=0;
    for(int x=1;x<=n;x++){
        int temp=0;
        for(int y=2;y<=x;y++){
            if(prime[y] && x%y==0) {
                temp++;
            }
        }
        if(temp==2) ans++;
    }
    cout<<ans;
    return 0;
}
