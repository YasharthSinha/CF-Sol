#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int ar[n + 1];
    ar[0] = 0;
    for (int x = 0; x < n; x++)
    {
        int a;
        cin >> a;
        ar[x + 1] = ar[x] + a;
    }
    int m;
    cin >> m;
    for (int x = 0; x < m; x++)
    {
        int b;
        cin >> b;
        int ans = lower_bound(ar, ar + n, b) - ar;
        cout << ans << "\n";
    }

    return 0;
}
