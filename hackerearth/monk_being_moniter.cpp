#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[1000005] = {0};
        for (int i=0;i<n;i++)
        {
            int x;
            scanf("%d",x);
            arr[x]++;
        }
        int max = 0,int min=100000;
        for(int i=0;i<n;i++)
        {
            if(arr[i])
            {
                if(arr[i]>max)
                    max=arr[i];
                
                if (arr[i]<min)
                    min =arr[i];
            }
        }
        if((max-min)>0)
            printf("%d\n",(max-min) );
        else
            printf("-1\n");
    }
}