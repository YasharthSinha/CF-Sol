#include<bits/stdc++.h>
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
        int n,k;
        cin>>n>>k;
        int i=1,j=INT_MAX,ans=0;
        while(i<=j)
        {
            int mid= i+(j-i)/2;
            int temp= mid- mid/n;
            if(temp==k)
            {
                ans=mid;
                j=mid-1;
            }
            else if(temp>k) j=mid-1;
            else i=mid+1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
