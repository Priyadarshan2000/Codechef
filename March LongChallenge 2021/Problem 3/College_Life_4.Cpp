//Priyadarshan 
#include <bits/stdc++.h>
using namespace std;
int FastIO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

#define int long long
int n, e, h, a, b, c;
void solve()
{
    int n, e, h, a, b, c, ans = 1e18;
    cin >> n >> e >> h >> a >> b >> c;

    for (int i = 0; i <= min({e, h, n}); i++)
    {
        int egg = e, choclate = h, person = n, cost = i * c;
        egg -= i, choclate -= i, person -= i;
        if (a < b)
        {
            
            int item = min(egg / 2, person);
            cost += (item * a);
            person -= item;

            item = min(choclate / 3, person);
            cost += (item * b);
            person -= item;
        }
        else
        {
           
            int item = min(choclate / 3, person);
            cost += (item * b);
            person -= item;

         
            item = min(egg / 2, person);
            cost += (item * a);
            person -= item;
        }
        if (person == 0)
            ans = min(ans, cost);
    }
    cout << ((ans == 1e18) ? -1 : ans) << '\n';
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
