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
        int n;
        cin>>n;
        vector<int>arr(n);
        int ans=0,f=0;
        for(int x=0;x<n;x++) cin>>arr[x];
        for(int x=n-2;x>=0;x--){
            while(arr[x+1]<=arr[x] && arr[x]>0){
                arr[x]/=2;
                ans++;
            }
            if(arr[x]==arr[x+1]){
                cout<<"-1\n";
                f=1;
                break;
            }
        }
        if(f==0) cout<<ans<<"\n";
    }
    return 0;
}
