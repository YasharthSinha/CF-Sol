#include<bits/stdc++.h>
#define ll                    long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        if((n*(a+b)>=c-d) && (n*(a-b)<=c+d)) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
