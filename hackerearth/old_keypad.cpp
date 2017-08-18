#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int arr[n];
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int k;
  cin>>k;
  int ks[k];
  int s=0;
  for(int i=0;i<k;i++)
  {
    cin>>ks[i];
    s=ks[i]+s;
  }
  if(s<n)
  {
    printf("-1");
    return 0;
  }
  sort(arr,arr+n);

  //reverse(ks,ks+k);
  int sum=0;
  int index=0;
  int f=1;
  for(int i=n-1;i>=0;i--)
    {
    	for(int j=index;j<k;j++)
    	{
    		//cout<<index;
    		if(ks[j]>0)
    		{
    			ks[j]--;
    			index=j+1;
    			sum=sum+f*arr[i];
    			if(index==k)
    			{ index=0;
    			  f++;
    			}
    			break;
    		}

    		//cout<<stroke;
    	}
    	//cout<<freq[i]<<endl;

    	//cout<<stroke<<endl;
    }
    cout<<sum<<endl;
    return 0;
}
