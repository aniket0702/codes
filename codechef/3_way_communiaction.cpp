#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sc(w,e) scanf("%lf %lf",&w,&e);
#define wh(r) ll r;scanf("%lld",&r);while(r--)


int main()
{
	wh(n)
	{
		double d;
		scanf("%lf",&d);
		double x[4];
		double y[4];
		for(int i=1;i<4;i++)
			sc(x[i],y[i]);
		double d12,d23,d13;
		d12 = (sqrt(pow((x[1] -x[2]),2) +pow((y[1] - y[2]),2)));
		d23 = sqrt(pow((x[3] -x[2]),2) +pow((y[3] - y[2]),2) );
		d13 = (sqrt(pow((x[1] -x[3]),2) +pow((y[1] - y[3]),2)));
		//printf("%f %f\n",d12,d13 );
		int cnt=0;
		if(d12 <= d)
			cnt ++;
		if(d13 <= d)
			cnt++;
		if(d23 <= d)
			cnt++;
		if(cnt>=2)
			printf("yes\n");
		else
			printf("no\n");

	}
	return 0;
}