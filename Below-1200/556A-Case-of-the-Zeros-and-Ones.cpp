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
    string s;
    cin>>s;
    int z=0,o=0;
    for(int x=0;x<n;x++){
        if(s[x]=='0') z++;
        else o++;
    }
    cout<<n-2*min(o,z)<<"\n";
    return 0;
}
