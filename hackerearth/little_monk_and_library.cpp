#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	scanf("%d",&n);
	assert(n>=1 and n<=1000000);
	vector < long long int > a;
	vector < long long int > b;
	a.resize(n);
	b.resize(n);
	for (int i=0; i<n; i++) scanf("%lld",&a[i]);
	for (int i=0; i<n; i++) scanf("%lld",&b[i]);
	for (int i=0; i<n; i++) {
		assert(a[i]>=1 and a[i]<=1000000000);
		assert(b[i]>=1 and b[i]<=1000000000);
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	assert(a.size()==n);
	assert(b.size()==n);
	long long int ans = 0 ;
	for (int i=0; i<n; i++) {
		ans = ans + abs(b[i]-a[i]);
	}
	printf("%lld\n",ans);
	return 0;
}
