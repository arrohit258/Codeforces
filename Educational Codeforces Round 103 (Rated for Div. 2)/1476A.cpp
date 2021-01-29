#include<bits/stdc++.h>
typedef  long long int ll;
using namespace std;

void solve()
{
    ll n,k;
    cin>>n>>k;
    ll target=k;
    if(n>target)
    {
        target=target*ceil((1.0*n)/k);
    }
    if(n==target)
    {
        cout<<1<<endl;
        return;
    }
    cout<<ceil((1.0*target)/n)<<endl;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    return 0;
}
