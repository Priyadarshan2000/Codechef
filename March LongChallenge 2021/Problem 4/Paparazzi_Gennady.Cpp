//Priyadarshan 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--){
        int n;
        cin>>n;
        vector<pair<int,int> > p, s;
        for(int i=0;i<n;i++){
            int h;
            cin>>h;
            p.push_back({i+1, h});
        }
        if (n==2){
            cout<<"1\n";
            continue;
        }
        s.push_back(p[0]);
        s.push_back(p[1]);
        int answer=1;
        int length=s.size();
        for(int i=2;i<n;i++){
            while(s.size()>=2){
                double x1=((double)s[length-1].second- (double)s[length-2].second)/((double)s[length-1].first-(double)s[length-2].first);
                double x2=((double)p[i].second-(double)s[length-1].second)/((double)p[i].first-(double)s[length-1].first);
                if(x1<=x2){
                    s.pop_back();
                    length--;
                }
                else break;

            }
            s.push_back(p[i]);
            length++;
            answer=max(answer,s[length-1].first-s[length-2].first);
        }
        cout<<answer<<endl;
    }
}
