// Priyadarshan Ghosh
#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     int t;
     cin>>t;
     while(t--){
         long long int n;
         cin>>n;
         long long int* a = new long long [n];
         int i=0;
         
         while(i<=n-1){
             cin>>a[i];
             i++;
         }
         sort(a,a+n);
         long long int ans  = abs(a[n-1]-a[0])+abs(a[n-1]-a[1])+abs(a[0]-a[1]);
         cout<<ans<<'\n';
     }
	return 0;
}
