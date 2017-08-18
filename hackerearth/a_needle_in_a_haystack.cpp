#include <iostream>
using namespace std;

#define loop(i,st,end) for(int i=st;i<end;i++)
#define ll long long int
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define sc(x) scanf("%d",&x)
#define sc2(x,y) scanf("%d%d",&x,&y)
#define sc3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define pii pair<int,int>
#define FF first
#define SS second


string p,s;

int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,l;
    cin>>t;
    while(t--)
    {
    cin>>p>>s;
    int lp=p.length(),lh=s.length(),fl=0;
    int f[26]={0},f1[26]={0};
    loop(i,0,lp)
    {
      f[p[i]-'a']++;
      f1[s[i]-'a']++;
    }
    loop(i,lp,lh)
        {
            int found = 1;
            loop(k,0,26)
            {
                if(f[k] != f1[k])
                {
                    found = 0;break;
                }
            }
            if(found)
            {
                fl=1;break;
            }
            f1[s[i-lp]-'a']--;
            f1[s[i]-'a']++;
            //cout<<endl<<s[i-lp]<<" "<<s[i]<<endl;
        }
        int found = 1;
        for(int k=0;k<26 && !fl;k++)
        {
            if(f[k] != f1[k])
            {
                found = 0;break;
        }
      }
        if(found) fl=1;

        if(!fl)
        printf("NO\n");
        else
        printf("YES\n");

    }
}pp
