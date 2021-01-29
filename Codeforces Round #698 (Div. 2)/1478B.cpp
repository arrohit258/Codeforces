#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

bool islucky(ll a,int d)
{
    bool ans=false;
    while(a)
    {
        int x=a%10;
        a=a/10;
        if(x==d)
        return true;
    }
    return ans;
}

void solve(){
    int q,d;cin>>q>>d;
    ll a[q];
    for(int i=0;i<q;i++)
    cin>>a[i];
    for(int i=0;i<q;i++)
    {
        
        int j=0;
        bool flag=false;
        if(islucky(a[i],d)){
               cout<<"YES"<<endl;
               flag=true;
               continue;
           }
          for(int j=d;j<=a[i];j+=d)
          {
              if(islucky(a[i]-j,d)){
                   cout<<"YES"<<endl;
                   flag=true;break;
              }
          }
        
        if(!flag)
        cout<<"NO"<<endl;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
