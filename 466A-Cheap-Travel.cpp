#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(m*a<=b) cout<<n*a<<"\n";//special tickets are expensive
    else cout<<(n/m)*b+min((n%m)*a,b)<<"\n"; //generalised maths
    return 0;
}
