#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void solve()
{
   int n,k;
   cin>>n>>k;
   ll p[n];
   for(int i=0;i<n;i++)
   cin>>p[i];
   ll sum[n];
   sum[0]=p[0];
   for(int i=1;i<n;i++)
   sum[i]=sum[i-1]+p[i];
   ll ans=0;
   for(int i=1;i<n;i++)
   {
       ll x=(p[i]*100)-(k*(sum[i-1]+ans));
       if(x<0)
       continue;
       if(x%k==0)
       ans=ans+(x/k);
       else
       ans=ans+(x/k) +1;

   }
   cout<<ans<<endl;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    return 0;
}
