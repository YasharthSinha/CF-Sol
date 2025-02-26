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
        vector<vector<char>>arr(8,vector<char>(8));
        for(int x=0;x<8;x++){
            for(int y=0;y<8;y++){
                cin>>arr[x][y];
            }
        }
        int red=0;
        for(int x=0;x<8;x++){
            for(int y=0;y<8;y++){
                if(arr[x][y]=='R') red++;
            }
            if(red==8) break;
            else red=0;
        }
        if(red==8) cout<<"R\n";
        else cout<<"B\n";
    }
    return 0;
}
