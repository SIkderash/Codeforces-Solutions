#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin  >> n;
    int a[n];
    ll cnt=0;
    for(int i=0; i<n; i++ ) cin >> a[i];
    for(ll i=0; i<(1<<n); i++){
            int sum =0;
        for(int j=0; j<n; j++){
            ll k = 1<<j;
            if(i&k) sum+=a[j];
            else sum+=-a[j];
        }
        if(sum%360==0) {cout<<"YES"; return 0;}
    }
    cout <<"NO"<< "\n";
}