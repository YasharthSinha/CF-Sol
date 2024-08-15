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
    string s=to_string(n);
    bool f=true;
    for(int x=0;x<s.size();){
        if(s[x]=='1' && s[x+1]=='4' && s[x+2]=='4') x+=3;
        else if(s[x]=='1' && s[x+1]=='4') x+=2;
        else if(s[x]=='1') x++;
        else {
            f=false;
            break;
        }
    }
    if(f) cout<<"YES";
    else cout<<"NO";
    return 0;
}
