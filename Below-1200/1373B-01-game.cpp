#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int z=0,o=0;
        for(char x:s){
            if(x=='0') z++;
            else o++;
        }
        if(min(z,o)%2) cout<<"DA\n";
        else cout<<"NET\n";
    }
    return 0;
}
