//Priyadarshan Ghosh
//partiality slove (TLE)
#include <iostream>
using namespace std;
typedef unsigned long long P;

P gcd(P a, P b)
{
    if(b==0)
    {
        return a;
    }
return gcd(b,a%b);    
}

int main()
{
    P t;
    cin>>t;
    
    while(t--)
    {
        P sum=0;
        P j;
        cin>>j;
        
        for(P i=1;i<=2*j;i++)
        {
            sum+=gcd(j+(i*i),j+(i+1)*(i+1));
        }
        cout<<sum<<endl;
    }
}
