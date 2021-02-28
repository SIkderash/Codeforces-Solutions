#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
int main(){
int n, m, k , frnd = 0;
cin >> n >> m >> k;
int x[m+1], p2n = (1<<n);
for(int i=0; i<m+1; i++) cin >> x[i];
for(int i=0; i<m; i++){
        //cout << "i "<< i << nl;
        int flag = 1, cnt = 0;
int l = x[m]^x[i];
//cout << "xor "<< l << nl;
for(int j=1;j<p2n;j*=2){
        //cout << "j "<< j << nl;
if(j&l) cnt++;
if(cnt>k) {flag=0; break;}
}
if(flag) frnd++;
}
cout << frnd;
return 0;
}