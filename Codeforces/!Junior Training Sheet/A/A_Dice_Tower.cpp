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
    int f;
    cin >> f;
    bool y = true;
    rep(i, 0, n)
    {
        int a, b;
        cin >> a >> b;
        set<int> no;
        no.insert(a);
        no.insert(b);
        no.insert(7-a);
        no.insert(7-b);
        for (auto x:no)
            if (x == f || x == 7-f)
                y = false;
    }
    cout << (y?"YES":"NO");
    return 0;
}