#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int>arr(m);
    for(int x=0;x<m;x++) cin>>arr[x];
    sort(arr.begin(),arr.end());
    int x=0,ans=INT_MAX;
    while(x<=(m-n)){
        ans=min(ans,arr[x+n-1]-arr[x]);
        x++;
    }
    cout<<ans;
    return 0;
}
