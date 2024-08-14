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
        ll n;
        cin>>n;
        ll sum=1,k=1;
        while(1){
            sum+=pow(2,k++);
            if(n%sum==0){
                cout<<n/sum<<"\n";
                break;
            }
        }
    }
    return 0;
}
