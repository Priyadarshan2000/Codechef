//Priyadarshan Ghosh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll highestPowerof2(ll n) 
{ 
	if(n==0)
	{
		return 0;
	}
   ll p = (ll)log2(n); 
   return (ll)pow(2, p);  
} 
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		vector<ll>arr;
		for (int i = 0; i < n; ++i)
		{
			int d;
			cin>>d;
			arr.push_back(d);
		}
		int stored=x;
		if(n==2)
		{
			while(x>0 and arr[0]!=0)
			{
				int tobe=highestPowerof2(arr[0]);
				arr[0]=arr[0] xor tobe;
				arr[1]=arr[1] xor tobe;
				x--;
			}
			if(x%2==1)
			{
				arr[0]=arr[0] xor 1;
				arr[1]=arr[1] xor 1;
				x--;
			}
		}
		else
		{
			for(int i=0;(i<n-1 and x>0);)
			{
				if(arr[i]==0)
				{
					i++;
					continue;
				}
				else
				{
					int tobe=highestPowerof2(arr[i]);
					arr[i]=arr[i] xor tobe;
					int j;
					for(j=1;i+j<n-1;j++)
					{
						if(arr[i+j]>(arr[i+j] xor tobe))
						{
							arr[i+j]=arr[i+j] xor tobe;
							break;
						}
					}
					if(i+j==n-1)
					{
						arr[n-1]=arr[n-1] xor tobe;
					}
					x--;
				}
			}
		}
		if(x==stored and x%2!=0)
		{
			if(arr[n-2]==0)
			{
				arr[n-2]=arr[n-2] xor 1;
				arr[n-1]=arr[n-1] xor 1;
				x--;
			}
			else
			{
				int tobe=highestPowerof2(arr[n-2]);
				arr[n-2]=arr[n-2] xor tobe;
				arr[n-1]=arr[n-1] xor tobe;
				x--;
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}