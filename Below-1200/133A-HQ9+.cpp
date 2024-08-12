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
    int n=s.size();
    bool f=false;
    for(int x=0;x<n;x++){
        if(s[x]=='H' || s[x]=='9' || s[x]=='Q'){
            f=true;
            break;
        }
    }
    if(f) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    return 0;
}
