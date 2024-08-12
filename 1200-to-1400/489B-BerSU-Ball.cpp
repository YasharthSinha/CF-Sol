#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int boys[n];
    for(int x=0;x<n;x++) cin>>boys[x];
    int m;
    cin>>m;
    int girls[m];
    for(int x=0;x<m;x++) cin>>girls[x];
    sort(boys,boys+n);//sort boys in ascending order
    sort(girls,girls+m,greater<int>());//sort girls in descending order
    int i=0,j=m-1,ans=0;
    while(i<n && j>=0)
    {
        if(abs(boys[i]-girls[j])<=1)//checks the difference is at most 1 or not
        {
            ans++;
            i++;
            j--;
          //unique pair must be formed so we update the values of i and j
        }
        else if(girls[j]>boys[i]) i++; 
        else j--;
    }
    cout<<ans<<"\n";
    return 0;
}
