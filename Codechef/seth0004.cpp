#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 1000000007
#define PI 3.1415926
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define forf(n,x) for(int x = 0; x < n; ++x)
#define forb(n,x) for(int x = n-1; x >= 0; --x)
#define fori(n,x,i) for(int x=i; x<n; ++x)

#define all(c) c.begin(), c.end()
#define itr(c,it) for( auto it = c.begin(); it != c.end(); ++it)

typedef priority_queue <int> pq;

int main(){
	fastio;
	/*int quer;
	cin>>quer;
	forf(quer,qe)
	{

	}*/

	int n;
	cin>>n;
	vector<int> arr(n), np(n);
	forf(n,i)
	{
		cin>>arr[i];
		np[i] = 0;
	}
	int balls = 0;
	sort(all(arr));

	forf(n-1,i)
	{
		if(!np[i])
		{
			balls++;
			fori(n,j,i+1)
			{
				if(arr[j]%arr[i] == 0)
					np[j] = 1;
			}
		}
	}

	cout<<balls;
	return 0;
}
