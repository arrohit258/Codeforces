#include<bits/stdc++.h>
typedef  long long int ll;
using namespace std;


void solve()
{
    int n;
    cin>>n;
    ll a[2*n];
    for(int i=0;i<2*n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+2*n);

    for(int i=0;i<2*n-1;i=i+2)
    {
        if(a[i]!=a[i+1])
         {
            cout<<"NO"<<endl;
            return;
        }
    }
    ll sum=0;int j=0;
    unordered_map<ll,bool>mp;
    for(int i=2*n-1;i>=0;i=i-2)
    {
        if((a[i]-sum)>0 && (a[i]-sum)%(2*(n-j))==0 && !mp[(a[i]-sum)/(2*(n-j))])
        {mp[(a[i]-sum)/(2*(n-j))]=true; sum+=(a[i]-sum)/(n-j); j++;  }
        else
        {
            cout<<"NO"<<endl;
            return;
        }

    }
    cout<<"YES"<<endl;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    return 0;
}
