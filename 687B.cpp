#include<bits/stdc++.h>
using namespace std;
const int mx = 1e6+5;
int lp[mx], powP[mx];
void pre(){
    lp[0] = 1; lp[1] = 1;
    for(int i=2; i<mx; i++){
        if(!lp[i]){
            for(int j = i; j<mx; j+=i){
                lp[j] = i;
            }
        }
    }
}
int main(){
    pre();
int n, k;
cin >> n >> k;
    for(int i=0; i<n;i++){
        int m;
        cin >> m;
        while(m>1){
                int cnt = 0;
                int p = lp[m];
                while(m%p==0){
                    cnt++;
                    m/= p;
                }
            powP[p] = max(cnt, powP[p]);
        }
    }
    while(k>1){
            int cnt = 0;
        int p = lp[k];
        while(k%p==0){
            cnt++;
            k/=p;
        }
        if(cnt>powP[p]){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}