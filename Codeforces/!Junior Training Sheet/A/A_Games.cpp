#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int t;
    cin >> t;
    vector<pair<int, int>> v(t);
    rep(i, 0, t)
    {
        int a, b;
        cin >> a >> b;
        v[i] = {a, b};
    }
    int res = 0;
    rep(i, 0, t-1)
        rep(j, i+1, t)
        {
            if (v[i].first == v[j].second)
                res++;
            if (v[i].second == v[j].first)
                res++;
        }
    cout << res;
    return 0;
}