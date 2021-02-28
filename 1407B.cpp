#include<bits/stdc++.h>
using namespace std;
int maxs;
int g[1005][1005];
int main(){
int t;
cin >> t;
while(t--){
int n;
cin >> n;
int a[n];
for(int i=0; i<n; i++){
cin >> a[i];
}
sort(a,a+n);
swap(a[0],a[n-1]);
//for(int i=0; i<n; i++) cout << a[i] <<" ";
//cout << endl;

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        g[i][j]= __gcd(a[i], a[j]);
    }
}
int d = a[0];
cout << a[0] << " ";
for(int i=1; i<n; i++){
        int ind = i, d2 = 1, d1;
    for(int j=i; j<n; j++){
        d1 = __gcd(d,a[j]);
        if(d1>d2){
            d2 = d1;
            //cout <<"*"<< ind << endl;
            ind = j;
        }
    }
    //cout << ind <<endl;
d = d2;
swap(a[i], a[ind]);
cout << a[i] << " ";
}
cout << '\n';

}
return 0;
}