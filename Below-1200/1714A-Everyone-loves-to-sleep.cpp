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
        int n,hh,mm;
        cin>>n>>hh>>mm;
        ll answer=1440,time=hh*60+mm;
        for(int x=0;x<n;x++){
            int h,m;
            cin>>h>>m;
            ll t= h*60+m-time;
            if(t<0) t+=1440;
            answer=min(answer,t);
        }
        cout<<answer/60<<" "<<answer%60<<'\n';
    }
    return 0;
}
