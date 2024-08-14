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
    string s;
    cin>>s;
    unordered_map<string,int>mp;
    for(int x=0;x<n-1;x++){
        mp[s.substr(x,2)]++;
    }
    int ans=INT_MIN;
    string word;
    for(auto x:mp){
        if(x.second>ans){
            ans=x.second;
            word=x.first;
        }
    }
    cout<<word<<"\n";
    return 0;
}
