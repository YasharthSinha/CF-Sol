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
        int n,x,oddnos=0,evennos=0;
        cin>>n>>x;
        vi arr(n);
        for(int y=0;y<n;y++){ 
            cin>>arr[y];
            if(arr[y]%2) oddnos++;
            else evennos++;
        }
        int temp=min(evennos,x-1),d=x-temp;//temp stores the number of possible even nos and d stores the remaining min odd nos
        if(d%2==0) d++; // if no. of min odd is even then we can't form any set so we will increase
        if(oddnos>=d && d<=x) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
