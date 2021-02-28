#include<bits/stdc++.h>
using namespace std;
int t;
int a[50];
int main(){
int n;
cin >> t;
l:
while(t--){
cin >> n;
for(int i=0; i<n; i++){
cin >> a[i];
}
sort(a,a+n);
for(int i=1; i<n; i++){
if(abs(a[i]-a[i-1])>1){ cout<< "NO\n"; goto l;}
}
cout << "YES\n";
}
return 0;
}