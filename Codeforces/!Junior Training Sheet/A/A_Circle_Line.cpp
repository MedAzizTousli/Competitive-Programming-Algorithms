#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i, 0, n)
        cin >> v[i];
    int s, t;
    cin >> s >> t;
    s--;
    t--;
    int a = min(s, t);
    int b = max(s, t);
    int x = 0;
    rep(i, a, b)
        x += v[i];
    int sum = accumulate(begin(v), end(v), 0LL);
    cout << min (x, sum-x);
    return 0;
}