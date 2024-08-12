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
    int n=s.size(),c=1;
    char prev=s[0];
    for(int x=1;x<n;x++){
        if(s[x]==prev) c++;
        else{
            prev=s[x];
            c=1;
        }
        if(c==7) {
            cout<<"YES"<<"\n";
            break;
        }
    }
    if(c!=7) cout<<"NO"<<"\n";
    return 0;
}
