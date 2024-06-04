#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string n;
    cin>>n;
    for(int x=0;x<n.size();x++)
    {
        if(x==0 && n[x]=='9') continue; //won't change first 9 as leading zeroes are not allowed
        char y= '9'-n[x]+'0'; // invert the digit
        if(n[x]>y) n[x]=y; // compare and chenge if needed
    }
    cout<<n;
    return 0;
}
