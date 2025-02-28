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
    vi arr(n),brr(n);
    for(int x=0;x<n;x++) {
        cin>>arr[x];
        brr[x]=arr[x];
    }
    sort(brr.begin(),brr.end());
    for(int x=0;x<n;x++){
        int ind= find(brr.begin(),brr.end(),arr[x])-brr.begin(),minval=INT_MAX,maxval=INT_MIN;
        if(ind<n-1){
            minval=min(minval,abs(brr[ind]-brr[ind+1]));
        }
        if(ind>0) minval=min(minval,abs(brr[ind]-brr[ind-1]));
        maxval=max(maxval,max(abs(arr[x]-brr[0]),abs(brr[n-1]-arr[x])));
        cout<<minval<<" "<<maxval<<"\n";
    }
    return 0;
}
