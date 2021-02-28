#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
l:
while(t--){
    int n, s1 =0, s2 =0, flag =0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
    cin >> a[i];
    if(a[i]==0) s1++;
    else s2++;
    }
    //if(flag) {cout <<1<<'\n'<<0<<'\n';goto l;}
    if(s1>=s2){
        cout << s1 << '\n';
        for(int i=0; i<s1; i++){
            cout << 0 << " ";
        }
    }
    else{
        cout << n/2 << '\n';
        for(int i=0; i<n/2; i++){
            cout << 1 << " ";
        }
    }
    cout << '\n';
}
return 0;
}