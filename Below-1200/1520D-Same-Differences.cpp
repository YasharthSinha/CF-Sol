#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,ll>mp;
        ll ans=0;
        //modify the condition as a[j]-j=a[i]-i so we store the values of a[i]-i
        for(int x=0;x<n;x++)
        {
            ll a;
            cin>>a;
            ans+=mp[a-x];
            mp[a-x]++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
