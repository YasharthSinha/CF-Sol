#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char dir;
    cin>>dir;
    string s;
    cin>>s;
    string temp="qwertyuiopasdfghjkl;zxcvbnm,./";
    string ans="";
    for(int x=0;x<s.size();x++){
        int i=temp.find(s[x]);
        if(dir=='R') ans+=temp[i-1];
        else ans+=temp[i+1];
    }
    cout<<ans<<"\n";
    return 0;
}
