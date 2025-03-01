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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if((c<=a/2 && d<=b/2) || (c>=a/2 && d>=b/2)) cout<<"1 "<<b<<" "<<a<<" 1\n";
        else cout<<"1 1 "<<a<<" "<<b<<"\n";
    }
    return 0;
}
