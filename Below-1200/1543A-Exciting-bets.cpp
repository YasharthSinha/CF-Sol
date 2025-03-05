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
        ll a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"0 0";
        } 
        else if(b<a){
            cout<<a-b<<" "<<min(a%(a-b),(a-b) - a%(a-b));
        } 
        else{
            cout<<b-a<<" "<<min(b%(b-a),(b-a) - b%(b-a));
        }
        cout << "\n";
    }
    return 0;
}
