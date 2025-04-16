#include<bits/stdc++.h>
#define ll                    long long int
#define vi                    vector<int>
#define vll                   vector<ll>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,k;
    cin>>n>>m>>k;
    vll arr(n+1,0);
    for(int x=1;x<=n;x++) cin>>arr[x];
    vector<vll>op(m,vll(3,0));
    for(int x=0;x<m;x++)
        cin>>op[x][0]>>op[x][1]>>op[x][2];
    vi qu(m+2,0);
    vll diff(n+2,0);
    for(int z=0;z<k;z++){
        int x,y;
        cin>>x>>y;
        x--;
        qu[x]++;
        qu[y]--;
    }
    ll tmp=0;
    for(int i=0;i<m;i++){
        tmp+=qu[i];
        diff[op[i][0]]+=tmp*op[i][2];
        diff[op[i][1]+1]-=tmp*op[i][2];
    }  
    for(int x=1;x<=n;x++){
        diff[x]+=diff[x-1];
        arr[x]+=diff[x];
        cout<<arr[x]<<" ";
    }
    return 0;
}
