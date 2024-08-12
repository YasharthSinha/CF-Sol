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
    int a,b,c=1,ans=1;
    for(int x=0;x<n;x++) {
        cin>>a;
        if(x>0 && a>=b){
            c++;
            ans=max(c,ans);
        }
        else c=1;
        b=a;
    }
    cout<<ans<<"\n";
    return 0;
}
