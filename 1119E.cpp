#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ll count = 0;
    count+=a[0]/3;
    a[0]%=3;
    for(int i=1; i<n; i++)
    {
        int k = a[0]*2;
        int l = a[i]-a[i]%2;
        int toUse = min(k,l);
        a[i]-=toUse;
        count+=a[i]/3;
        a[i]%=3;
        a[0]-=toUse/2;
        a[0]+=a[i];
        count+= toUse/2;
    }
    cout << count << nl;
    return 0;
}