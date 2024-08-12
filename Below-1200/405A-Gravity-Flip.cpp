#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int x=0;x<n;x++) cin>>arr[x];
    sort(arr.begin(),arr.end());
    for(int x=0;x<n;x++) cout<<arr[x]<<" ";
    return 0;
}
