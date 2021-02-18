// Priyadarshan Ghosh
#include <bits/stdc++.h>
using namespace std;

bool elements(map<int,int>position, int weight){
    
    int count=0;
    
    for(auto it:position){
        if(it.first<weight && it.second<position[weight]){
            count++;
        }
    }
    
    if(count == weight-1){
        return 1;
    }
    return 0;
}
int kicks(vector<int>w, vector<int>l){
    
    map<int,int>position;
    map<int,int>length;
    
    for(int i=0;i<w.size();i++){
        position[w[i]]=i;
        length[w[i]]=l[i];
    }
    int kicks =0;
    sort(w.begin(),w.end());
    
    for(int i=0;i<w.size();i++){
    while(!elements(position,w[i])){
        kicks++;
        position[w[i]] = position[w[i]] + length[w[i]];
       }
    }
   return kicks;
}

int main() {
   
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   
   long long int t;
   cin>>t;
   
   while(t--){
       int n;
       cin>>n;
       vector<int>w,l;
       
       for(int i=0;i<n;i++){
          int p;
          cin>>p; 
          w.push_back(p);
       }
       for(int i=0;i<n;i++){
           int q;
           cin>>q;
           l.push_back(q);
       }
       cout<<kicks(w,l)<<'\n';
   }
	return 0;
}
