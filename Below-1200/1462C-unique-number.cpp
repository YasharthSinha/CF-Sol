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
        ll n;
        cin>>n;
        if(n<=9){
            cout<<n<<"\n";
            continue;
        }
        string ans="";
        int num=n,x=9;
        while(x>=1){
            if(num==0) break;
            if(num>=x){
                num-=x;
                ans=char(x+'0')+ans;
                x--;
            }
            else{
                ans=char(num+'0')+ans;
                num-=num;
                break;
            }
        }
        if(num==0) cout<<ans<<"\n";
        else cout<<"-1\n";
    }
    return 0;
}
