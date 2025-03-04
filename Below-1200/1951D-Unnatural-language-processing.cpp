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
        vector<bool>dot(n,false);
        for(int x=n-1;x>=0;x--){
            if(s[x]=='a' || s[x]=='e'){
                x--;
                dot[x]=true;
            }
            else{
                x-=2;
                dot[x]=true;
            }
        }
        for(int x=0;x<n;x++){
            if(x!=0 && dot[x]) cout<<".";
            cout<<s[x];
        }
        cout<<"\n";
    }
    return 0;
}
