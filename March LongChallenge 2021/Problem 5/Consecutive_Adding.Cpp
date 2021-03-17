//Priyadarshan 
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll t;
	cin>>t;
	while(t--){
	    int r,c,x;
	    cin>>r>>c>>x;
	    int a[r][c],b[r][c];
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            cin>>a[i][j];
	        }
	    }
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            cin>>b[i][j];
	        }
	    }
	    
	    for(int i=0;i<r;i++){
	        for(int j=0;j<=c-x;j++){
	            int v=a[i][j]-b[i][j];
	            for(int k=j;k<j+x;k++){
	                a[i][k]-=v;
	            }
	        }
	    }
	  
	    for(int i=0;i<c;i++){
	        for(int j=0;j<=r-x;j++){
	            int v=a[j][i]-b[j][i];
	            for(int k=j;k<j+x;k++){
	                a[k][i]-=v;
	            }
	        }
	    }

	    bool flag = true;
	    for(int i=0;i<r;i++){
	        for(int j=0;j<c;j++){
	            if(a[i][j]!=b[i][j]){
	                flag=false;
	                break;
	            }
	        }
	    }
	    if(flag) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;

	}
	return 0;
}
