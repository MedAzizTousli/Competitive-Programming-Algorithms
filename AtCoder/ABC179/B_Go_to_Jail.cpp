#include <bits/stdc++.h>
#define int long long
#define ll long long
#define FLASH ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define all(v) ((v).begin()), ((v).end())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end))) // rep(i, 1, 5) --> {1,2,3,4} // rep(i, 5, 1) --> {4,3,2,1} // rep(it, end(v), begin(v)) --> *it

using namespace std;

signed main()
{
	int n;
    cin >> n;
    int x = 0;
    bool y = false;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
            x++;
        else 
            x = 0;
        if (x == 3)
            y = true;
    }
    cout << (y?"Yes":"No");
	return 0;
}