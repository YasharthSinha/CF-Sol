#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,s=0;
    cin>>n;
    vector<int>arr(n);
    for(int x=0;x<n;x++){
        cin>>arr[x];
        s+=arr[x];    
    }
    s/=2;
    sort(arr.begin(),arr.end());
    int s2=0,ans=0;
    for(int x=n-1;x>=0;x--){
        s2+=arr[x];
        ans++;
        if(s2>s) break;
    }
    cout<<ans<<"\n";
    return 0;
}
