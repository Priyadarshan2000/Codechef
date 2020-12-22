//Priyadarshan Ghosh
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int p=0;
	
	for(int i=0; i<n; ++i)
		if(s[i]=='1')
			p++;
	
	double ans=(double)(p+(120-n))/120;
	cout << (ans*100>=75?"YES":"NO") << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
