#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<long long int> f;
int main(){
    f.pb(0);
    f.pb(1);
    f.pb(1);
    f.pb(2);
for(int i=4; f[i-1]+f[i-2]<1e9; i++){
    f.push_back(f[i-1]+f[i-2]);
}
long long int i; cin >> i;
if(i==2) cout << 1 <<" "<< 1 <<" "<<0;
else if(i==1) cout << 1 <<" "<< 0 <<" "<<0;
else if(i==0) cout << 0 <<" "<< 0 <<" "<<0;
else {
        int low = 0, high = f.size();
while(high-low>=4){
    int mid = (low+high+1)/2;
    if(f[mid]<i) low = mid+1;
    else high = mid;
}
int j;
for(j=low; j<=high; j++){
    if(f[j]==i) break;
}
cout << f[j-1] << " "<< f[j-3] << " "<< f[j-4]<<'\n';
}
return 0;
}