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
    vector<ll>arr(n),brr(n);
    for(int x=0;x<n;x++){
        cin>>arr[x];
        brr[x]=arr[x];
    }
    sort(all(brr));
    for(int x=1;x<n;x++){
        arr[x]=arr[x-1]+arr[x];
        brr[x]=brr[x-1]+brr[x];
    }
    int m,l,r,type;
    cin>>m;
    for(int x=0;x<m;x++){
        cin>>type>>l>>r;
        l-=1;
        r-=1;
        if(type==1){
            if(l==0) cout<<arr[r]<<"\n";
            else cout<<arr[r]-arr[l-1]<<"\n";
        }
        else if(type==2){
            if(l==0) cout<<brr[r]<<"\n";
            else cout<<brr[r]-brr[l-1]<<"\n";
        }
    }
    return 0;
}
