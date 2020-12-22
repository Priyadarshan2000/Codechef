//Priyadarshan Ghosh
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int x, y, k, n;
	cin >> x >> y >> k >> n;
	bool ok=0;
	
	if(x>y)
		swap(x, y);

	while(y>0&&x<n) {
		x+=k;
		y-=k;
		if(x==y) {
			ok=1;
			break;
		}
	}
	cout << (ok?"Yes":"No") << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
