//Priyadarshan Ghosh
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long int t,n,ans,temp;
    long long mod = 1000000007;
    cin >> t;
    while(t--)
    {
        cin >> n;
        temp=1;
        ans=2;
        n--;
        while(n)
        {
            if(n%2)
                temp=(ans*temp)%mod;
            ans=(ans*ans)%mod;
            n/=2;
        }
        cout << temp << endl;
    }
    return 0;
}
