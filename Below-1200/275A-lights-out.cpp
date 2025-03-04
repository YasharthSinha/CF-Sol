#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a,b,c,d,e,f,g,h,i;
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>i;
    if((a+b+d)%2==0) cout<<"1";
    else cout<<"0";
    if((a+b+c+e)%2==0) cout<<"1";
    else cout<<"0";
    if((b+c+f)%2==0) cout<<"1\n";
    else cout<<"0\n";
    if((a+d+e+g)%2==0) cout<<"1";
    else cout<<"0";
    if((d+e+f+b+h)%2==0) cout<<"1";
    else cout<<"0";
    if((c+e+f+i)%2==0) cout<<"1\n";
    else cout<<"0\n";
    if((d+g+h)%2==0) cout<<"1";
    else cout<<"0";
    if((g+h+e+i)%2==0) cout<<"1";
    else cout<<"0";
    if((h+f+i)%2==0) cout<<"1";
    else cout<<"0";
    return 0;
}
