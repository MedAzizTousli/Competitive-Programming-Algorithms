#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n+1);
    rep(i, 1, m+1)
    {
        int a;
        cin >> a;
        rep(j, a, n+1)
            if (v[j] == 0)
                v[j] = a;
    }
    rep(i, 1, n+1)
        cout << v[i] << " "; 
    return 0;
}