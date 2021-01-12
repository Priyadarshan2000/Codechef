//Priyadarshan Ghosh
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define ff first
#define ss second
#define pii pair<int,int>
#define pb push_back
#define IOS ios_base::sync_with_stdio(false),cin.tie(NULL);
#define endl '\n'
vector<int> a, pre;
vector<vector<int>> dp;
int n, k;
int solve(int i,int h)
{
    if(h>=k){
        if(pre[i]-h>=k) return i;
        return 1e9;
    } 
    if(i>=n) return 1e9;
    if(dp[i][h]!=-1) return dp[i][h];
    return dp[i][h]=min(solve(i+1, h), solve(i+1, h+a[i]));
}
void tests()
{
    cin>>n>>k;
    a.assign(n,0);
    pre.assign(n+1,0);
    for(int i=0;i<n;i++) cin>>a[i];
    
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for(int i=0;i<n;i++){
        pre[i+1]=pre[i]+a[i];
    }
    dp.assign(n+1, vector<int>(k+10,-1));
    int ans=solve(0,0);
    if(ans==1e9) ans=-1;
    cout<<ans<<endl;   
}
int32_t main( int argc , char ** argv )
{
	ios_base::sync_with_stdio(false) ; 
	cin.tie(NULL) ; 
	int t = 1;
	cin>>t;
	while(t--){
		tests();
	}
    return 0 ; 
}