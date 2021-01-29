#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;cin>>n;
    int arr[n];
    unordered_map<int,int>mp;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
        maxi=max(mp[arr[i]],maxi);

    }
    cout<<maxi<<endl;

}

int main()
{
    int t;cin>>t;
    while(t--)
    solve();
    return 0;
}
