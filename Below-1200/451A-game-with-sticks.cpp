#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m,n,temp;
    cin>>m>>n;
    if(m>n) temp=n;
    else temp=m;
    if(temp%2==0) cout<<"Malvika";
    else cout<<"Akshat";
    return 0;
}
