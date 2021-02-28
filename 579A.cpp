#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
int main(){
int bac , ans=0; cin >> bac;
while(bac){
    if(bac&1) ans++;
    bac>>=1;
}
cout <<ans;
return 0;
}