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
    char mark, rest;
    bool res = true;
    rep(i, 0, n)
        rep(j, 0, n)
        {
            char c;
            cin >> c;
            if (i == 0 && j == 0)
                mark = c;
            else if (i == 0 && j == 1)
                rest = c;
            else 
                if (i == j || i == n-j-1)
                    if (c != mark)
                        res = false;
                    else;
                else 
                    if (c != rest)
                        res = false;
        }
    if (mark == rest)
        res = false;
    cout << (res?"YES":"NO");
    return 0;
}