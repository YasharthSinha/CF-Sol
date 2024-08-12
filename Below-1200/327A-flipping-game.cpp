#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int a[n],b[n],ones[n];
    for(int i=0;i<n;i++){
		cin>>a[i];
	}
	ones[0]=(a[0]==1);
	for(int i=1;i<n;i++){
		ones[i]=ones[i-1]+(a[i]==1);
	}
	b[0]=0;
	for(int i=1;i<n;i++){
		b[i]=max(b[i-1],2*ones[i-1]-i);
	}
	int ans=(a[0]!=1);
	for(int i=1;i<n;i++){
		ans=max(ans,b[i]+ones[n-1]-2*ones[i]+i+1);
	}
	cout<<ans<<endl;
    // cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.";
    return 0;
}
