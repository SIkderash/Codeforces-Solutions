


# include <bits/stdc++.h>

using namespace std;


#define ll              long long int

int main()
{
    //freopen("output.txt", "w", stdout);
    ll n; cin >> n;
    int a[n]; for(int i=0; i<n; i++) cin >> a[i];
    sort(a,a+n); cout << a[n-1]-a[0]<<" ";
    ll c1 =1; ll i=0; while(i<=n-2 && a[i]==a[i+1]){c1++; i++;}
    ll c2 = 1;
    if(a[0]!=a[n-1]){i=n-1; while(i>=1 && a[i]==a[i-1]){c2++; i--;}cout << (c1)*(c2);}
    else {cout << n*(n-1)/2;}

}
    /*

    */