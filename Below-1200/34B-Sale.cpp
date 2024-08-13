#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        ll n,m;
        cin>>n>>m;
        vector<int>arr(n);
        for(int x=0;x<n;x++)cin>>arr[x];
        sort(arr.begin(),arr.end());
        int ans=0;
        for(int x=0;x<m;x++){
            if(arr[x]<0) ans+=abs(arr[x]);
        }
        cout<<ans<<"\n";
    return 0;
}
