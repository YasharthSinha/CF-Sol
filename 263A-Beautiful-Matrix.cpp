#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int i=0,j=0,k;
    for(int x=0;x<5;x++){
        for(int y=0;y<5;y++){
            cin>>k;
            if(k==1){
                i=x;
                j=y;
            }
        }
    }
    cout<<abs(j-2)+abs(i-2)<<"\n";
    return 0;
}
