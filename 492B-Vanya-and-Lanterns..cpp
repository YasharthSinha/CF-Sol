#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,l;
    cin>>n>>l;
    int arr[n];
    for(int x=0;x<n;x++)
    {
        cin>>arr[x];
    }
    sort(arr,arr+n);
    int r= max(arr[0], l-arr[n-1])*2;
    for(int x=0;x<n-1;x++)
    {
        r=max(r,arr[x+1]-arr[x]);
    }
    printf("%.10llf\n",r/2.0);
    return 0;
}
