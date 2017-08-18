#include <iostream>
using namespace std;
void prime(int a)
{
    int flag=0;
    if(a==1)
    {cout<<"  ";}
    else
    {
    for(int c=2;c<=a-1;c++)
    {
        if(a%c==0)
        {
            flag=1;
            break;
        }
    }
    }
    if(flag==0)
    {cout<<"* ";}
    else
    {cout<<"  ";}
}
int main()
{
    int n;
    cout<<"Enter number of Rows (An Odd Number) : ";
    cin>>n;
    int tl[n/2],k=n,tr[n/2];
    if(n%2!=0)
    {
    for(int i=0;i<(n+1)/2;i++)
    {
        tl[i]=k*k-2*(k-1);
        tr[n/2-i-1]=tl[i]-k;
        for(int c=1;c<i+1;c++)
        {
            int z=tl[c-1];
            prime(z+i-c+1);
        }
        prime(tl[i]);
        int p=tl[i]-1;
        for(int j=0;j<n-2*i-1;j++)
        {
            prime(p);
            p--;
        }
        k-=2;
        for(int m=0;m<i;m++)
        {
            prime(tr[n/2-i+m]);
            tr[n/2-i+m]--;
        }
        cout<<endl;
    }
    int bl[n/2],br[n/2],w=n;
    for(int i=0;i<n/2;i++)
    {
        bl[i]=w*w-2*(w-1)+2*(w/2);
        br[n/2-i-1]=w*w;
        w=w-2;
    }
    for(int i=0;i<n/2;i++)
    {
        int x=n/2-1-i;
        for(int j=0;j<n/2-i;j++)
        {
            prime(bl[j]-x);
            x--;
        }
        for(int a=0;a<2*(i+1);a++)
        {
            bl[n/2-i-1]++;
            prime(bl[n/2-i-1]);
        }
        for(int c=0;c<n/2-i-1;c++)
        {
            int h=br[c+i]+c+1;
            prime(h);
        }
        cout<<endl;
    }
    }
    else
    {
        cout<<"Aborted!!!\nDude, you must enter an odd number :P";
    }
    return 0;
}
