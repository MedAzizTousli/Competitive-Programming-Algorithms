#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int n, m, t;
    cin >> n >> m >> t;
    int res = n;
    bool y = true;
    int diff = 0;
    while(m--)
    {
        int a, b;
        cin >> a >> b;
        diff = a - diff;
        res = res - diff;
        // cout << res << " ";
        if (res <= 0)
            y = false;
        res = min(n, res + b - a);
        // cout << res << endl;
        diff = b;
    }
    res = res - (t - diff);
    if (res <= 0)
        y = false;
    cout << (y?"Yes":"No");
	return 0;
}