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
    string s;
    cin >> s;
    map<char, int> mp;
    rep(i, 0, s.size())
        mp[s[i]]++;
    int a = min(mp['X'], mp['x']);
    int r = n/2 - a;
    cout << r << endl;
    rep(i, 0, s.size())
    {
        if (mp['x'] > mp['X'] && s[i] == 'x')
            r--,
            s[i] = 'X';
        else if (mp['X'] > mp['x'] && s[i] == 'X')
            r--,
            s[i] = 'x';
        if (r == 0)
            break;
    }
    cout << s;    
    return 0;
}