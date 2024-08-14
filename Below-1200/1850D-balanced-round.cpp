#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int x=0;x<n;x++) cin>>arr[x];
        sort(arr.begin(),arr.end());
        int c=1,ans=1;
        for(int x=0;x<n-1;x++){
            if((arr[x+1]-arr[x])<=k) c++;
            else c=1;
            ans=max(ans,c);
        }
        cout<<n-ans<<"\n";
    }
    return 0;
}
