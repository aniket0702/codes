#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<long long,long long> &a, const pair<long,long> &b)
{
    return (a.second < b.second);
}
int main()
{
    long long n,k;
    cin>>n>>k;
    vector <pair <long long, long long> > v;
    for(int i=0;i<n;i++)
        {
            long long c;
            scanf("%lld",&c);
            v.push_back(make_pair(c,c%k));
        }
    //sort(v.begin(),v.begin() + n,sortbysec);
    for (int i = 0; i < n; i++)
    {	
 		for (int j = 0; j < n-i-1; ++j)
 		{
 			if(v[j].second > v[j+1].second)
 			{
 				pair <long long ,long long> temp = v[j];
 				v[j]=v[j+1];
 				v[j+1] = temp;
 				// for(int k=0;k<n;k++)
     //    			printf("%lld ",v[k].first);
     //    		printf("\n");

 			}
 		}
    }
    for(int i=0;i<n;i++)
        printf("%lld ",v[i].first);
    
    printf("\n");
}