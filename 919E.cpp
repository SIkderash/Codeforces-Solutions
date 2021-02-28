#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll a, b, p ,x;
ll bigmod(ll base, ll power){
    ll ans = 1;
    while(power){
        if(power&1) ans = ans*base %p;
        base = base*base %p;
        power = power >> 1;
    }
    return ans;
}

int main(){
cin >> a >> b >> p >> x;
ll ans = 0;
for(int i=1; i<=p-1; i++)
{
    ll inv_ai = b*bigmod(bigmod(a,i),p-2)%p;
    ll this_class = (p-1)*((i-inv_ai+p)%p) +i;
    if(x>=this_class) {
        ans += ((x-this_class)/(p*(p-1)))+1;
    }
}
cout << ans ;
return 0;
}