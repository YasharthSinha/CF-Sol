#include<bits/stdc++.h>
#define ll                    long long int
#define vi                    vector<int>
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
        vi arr(n);
        for(int x=0;x<n;x++) cin>>arr[x];
        int answer=0;
        for(int x=0;x<n;x++){
            for(int y=x+1;y<n;y++){
                if(__gcd(arr[x],2*arr[y])>1) answer++;
                else{
                    if(__gcd(2*arr[x],arr[y])>1) answer++;
                }
            }
        } 
        cout<<answer<<"\n";
    }
    return 0;
}
