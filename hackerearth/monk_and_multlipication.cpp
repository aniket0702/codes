#include<bits/stdc++.h>
using namespace std;
int arr[100005]={0};
// #define  ll long long int
typedef long long ll;
int main()
{

	int n,i;
	priority_queue<int>q;
	scanf("%d",&n);
	ll a[n];
	ll x,y,z;
	for(i = 0; i < n; i++) {
		scanf("%lld",&a[i]);
		q.push(a[i]);
		if(q.size() < 3) {
			printf("-1\n");
			continue;
		}
		x = q.top();
		q.pop();
		y = q.top();
		q.pop();
		z = q.top();
		q.pop();
		q.push(x);
		q.push(y);
		q.push(z);
		x = x*y;
		x = x*z;
		printf("%lld\n",x);
	}
	return 0;
}
