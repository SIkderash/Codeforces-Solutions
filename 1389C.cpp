#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
        vector<int>v;
        int cnt[10]={0};
    string s;
    cin >> s;
    int mx = 0;
    for(int i=0; i<s.length(); i++){
        cnt[s[i]-'0']++;
        if(mx<cnt[s[i]-'0']) {mx = cnt[s[i]-'0'];}
    }
    int flag = 0;
    for(int i=0; i<=9; i++){
        for(int j=0; j<=9; j++){
            int c= 0;
            if(i!=j && cnt[i]>0 && cnt[j]>0){
                for(int k=0; k<s.length(); k++){
                    if(s[k]-'0'==i) flag = 1;
                    if(s[k]-'0'==j && flag==1) { flag=0; c++;}
                }
                //cout << i <<" "<< j <<" "<< c <<endl;
                v.push_back(c);
            }
            flag = 0;
        }
    }
    //cout << mx <<endl;
    sort(v.rbegin(), v.rend());
    if(v.size()>0) {
            //cout << v[0] <<endl;
        if(v[0]*2<mx) cout /*<<"* "*/<<s.length()-mx << endl;
        else cout /*<<"# " */<< s.length()-2*v[0]<<endl;
    }
    else cout /*<<"+ "*/<< s.length()-mx<<endl;
}
return 0;
}