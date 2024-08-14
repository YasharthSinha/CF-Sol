#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k;
    cin>>k;
    vector<int>arr(12);
    for(int x=0;x<12;x++) cin>>arr[x];
    sort(arr.begin(),arr.end());
    int x=11,ans=0;
    while(x>=0 && k>0){
        k-=arr[x];
        x--;
        ans++;
    }
    if(k<=0) cout<<ans<<"\n";
    else cout<<"-1\n";
    return 0;
}
