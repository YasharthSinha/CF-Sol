#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    int n=s.size(),f=1;
    for(int x=0;x<n;x++){
        if(s[x]=='W' && s[x+1]=='U' && s[x+2]=='B'){
            x+=2;
            if(f==0) cout<<" ";
            continue;
        }
        else{
            cout<<s[x];
            f=0;
        }
    }
    return 0;
}
