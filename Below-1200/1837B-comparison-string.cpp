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
        string s;
        cin>>n>>s;
        char ch=s[0];
        int count=1,ans=1;
        for(int x=1;x<n;x++){
            if(s[x]==ch) {
                count++;
                ans=max(ans,count);
            }
            else{
                count=1;
                ch=s[x];
            }
        }
        cout<<ans+1<<"\n";
    }
    return 0;
}
