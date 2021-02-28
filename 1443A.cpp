#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt = 0;
        for(int i=2*n-2; cnt<n; i+=2){
            cout << i+2 <<" ";
            cnt++;
        }
        cout << '\n';
    }

    return 0;
}