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
        int n,a,b;
        cin>>n>>a>>b;
        for(int x=0;x<n;x++){
            cout<<(char)('a'+x%b);
        }
        cout<<"\n";
    }
    return 0;
}
