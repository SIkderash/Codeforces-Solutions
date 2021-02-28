#include<bits/stdc++.h>
using namespace std;
long long int a[55];
long long int b[55];
int main(){
int t;
cin >> t;
while(t--){
int n;
cin >> n;
vector<pair<int,int> > c;
long long int ans=0, min1 = INT_MAX, min2 = INT_MAX;
for(int i=0; i<n; i++){
    cin >> a[i];
    min1 = min(min1, a[i]);
}
for(int i=0; i<n; i++){
    cin >> b[i];
    min2 = min(min2, b[i]);
}
for(int i=0; i<n; i++){
    c.push_back(make_pair(a[i],b[i]));
}

for(int i=0; i<n; i++){
        ans+=max(c[i].first-min1, c[i].second-min2);
}
cout <<ans<<'\n';
}
return 0;
}