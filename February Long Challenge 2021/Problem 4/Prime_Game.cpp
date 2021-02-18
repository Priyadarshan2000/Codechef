// Priyadarshan Ghosh
#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

const int mxN = int(1e6) + 5;
vector<bool>is_prime(mxN,true);
vector<int> ans(mxN);

void sieve(){

    is_prime[0] = is_prime[1] = false;

    for(int i = 2 ; i*i <= mxN ; i++){
        if(is_prime[i]){
        	for(int j = i*i ; j <= mxN ; j+=i){
                is_prime[j] = false;
            }
        }
    }
}

void precompute(){

	int cnt = 0;
	for(int i = 1 ; i <= mxN ; i++){
		if(is_prime[i]) cnt++;
		ans[i] = cnt;		
	}
}


int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	sieve(); 		
	precompute(); 	
	while(t--){
		ll x,y;
		cin >> x >> y;

		if(ans[x] <= y) cout << "Chef\n"; 
		else cout << "Divyam\n";
	}
}
