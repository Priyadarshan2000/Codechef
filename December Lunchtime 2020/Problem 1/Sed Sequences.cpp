//Priyadarshan Ghosh
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n, k;
	cin >> n >> k;
	int sum=0;
	
	for(int i=0; i<n; ++i) {
		int a;
		cin >> a;
		sum+=a;
	}
	cout << (sum%k==0?0:1) << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}