#include<bits/stdc++.h>
#define ll                    long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        for(int x=n;x>m;x--) cout<<x<<" ";
        for(int x=1;x<=m;x++) cout<<x<<" ";
        cout<<'\n';
    }
    return 0;
} 
