//Priyadarshan Ghosh
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool compare(vector<vector<ll>> a, vector<vector<ll>> b){
    return (a[0][0]<b[0][0]);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<ll>> vt;
        ll count[n][2];
        ll ans=0;
        ll p=0;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            count[i][0]=0,count[i][1]=0;
            for(int j=0;j<m;j++){
                ll val;
                cin>>val;
                vector<ll> temp;
                vt.push_back(temp);
                vt[p].push_back(abs(val));
                vt[p].push_back(i);
                vt[p].push_back(val>0?1:0);
                val>0?count[i][1]++:count[i][0]++;
                p++;
            }
        }
        sort(vt.begin(),vt.end(),[](const vector<ll>& a, const vector<ll>& b) {
  return a[0] < b[0];});
        for(int i=0;i<vt.size();){
            vector<ll> temp=vt[i];
            vector<vector<ll>> cur;
            cur.push_back(temp);
            i++;
            while(i<vt.size() && temp[0]==vt[i][0]){
                cur.push_back(vt[i]);
                i++;
            }
            if(cur.size()==1){
                if(temp[2]==1){
                    ans+=count[temp[1]][0];
                }
                else{
                    ans+=count[temp[1]][1];
                }
                count[temp[1]][temp[2]]--;
            }
            else{
                for(int j=0;j<cur.size();j++){
                    count[cur[j][1]][cur[j][2]]--;
                    ans+=count[cur[j][1]][cur[j][2]];
                }
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}