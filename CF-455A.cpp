#include<bits/stdc++.h>
using namespace std;
int N = 1e5+5;
int dp(int n, int c[]){
    if(n==1){
        return c[1];
    }
    else if(n==0){
        return 0;
    }
return max(dp(n-1,c),dp(n-2,c)+c[n]);
}
int main(){
int n;
cin >> n;
int a[n], c[N];
for(int i=0; i<n; i++){
cin >> a[i];
c[a[i]++];
}
printf("%d", dp(n, c));
}
