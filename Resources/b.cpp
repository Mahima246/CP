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

#define ini(a,i) memset(a, i, sizeof(a))
#define forf(n,x) for(int x = 0; x < n; ++x)
#define forb(n,x) for(int x = n-1; x >= 0; --x)
#define fori(n,x,i) for(int x=i; x<n; ++x)

#define all(c) c.begin(), c.end()
#define itr(c,it) for( auto it = c.begin(); it != c.end(); ++it)

typedef priority_queue <int> pq;

int main(){
	fastio;
	int quer;
	cin>>quer;
	forf(quer,qe)
	{
        int n;
        int m;
        cin>>n>>m;
        vector<int> arr(n);
        forf(n,i)
            cin>>arr[i];
        sort(all(arr));
        float sum = 0;
        float sumat = 0;
        /*do
        {
            sum += arr[n-1-count];
            ++count;
            sumat = sum/count;
        } while(sumat >= m && count < n);*/
	int i = 0;
	for(; i<n; ++i)
	{
		sum += arr[n-1-i];
		sumat = sum/(i+1);
		if(sumat <float(m))
			break;
	}
        
       	cout<<i<<"\n";
	}
	return 0;
}

