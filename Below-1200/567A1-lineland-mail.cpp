#include<bits/stdc++.h>
#define vi                    vector<int>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vi arr(n);
    for(int x=0;x<n;x++)
        cin>>arr[x];
    for(int x=0;x<n;x++){
        int ind= find(arr.begin(),arr.end(),arr[x])-arr.begin(),minval=INT_MAX,maxval=INT_MIN;
        if(ind<n-1){
            minval=min(minval,abs(arr[ind]-arr[ind+1]));
        }
        if(ind>0) minval=min(minval,abs(arr[ind]-arr[ind-1]));
        maxval=max(maxval,max(abs(arr[x]-arr[0]),abs(arr[n-1]-arr[x])));
        cout<<minval<<" "<<maxval<<"\n";
    }
    return 0;
}
