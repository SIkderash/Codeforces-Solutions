#include<bits/stdc++.h>
using namespace std;
bool p[1000+3], vis[1005];
int main(){
string s;
cin >> s;
int n = s.length();
char ne[n+1];
for(int i=0; i<n; i++){
    ne[i] = '.';
}
vector<int>v;
for(int i=2; i*i<=1000; i++){
        if(!p[i]){
    for(int j = i+i; j<=1000; j+=i){
        p[j]=true;
    }
    v.push_back(i);
    }
}
int i;
for(i=0; i<v.size(); i++){
        //cout << v[i] <<endl;
    if(v[i]*2>n) {
        break;
    }
}
i--;
int is[26];
for(int j=0; j<26; j++) is[j]=0;
int cnt = 0;
for(int j=0; j<=i; j++){
    for(int k = v[j]; k<=n; k+=v[j]){
        if(!vis[k]){
            cnt++;
            vis[k] = true;
        }
    }
}
for(int j=0; j<n; j++){
    is[s[j]-'a']++;
}
for(int l=0; l<26; l++) {
        if(is[l]>=cnt) {
            cout << "YES\n";
            for(int j=0; j<=i; j++){
                for(int k = v[j]; k<=n; k+=v[j]){
                    ne[k-1] =  (char)(l+'a');
                }
            }
            is[l]-=cnt;
            for(int z=0; z<n; z++){
                    if(ne[z]=='.'){
            for(int k=0; k<26; k++){
                if(is[k]>0) {
                    ne[z]=(char)k+'a';
                    is[k]--;
                    break;
                }
            }
                    }
            cout << ne[z];


            }
            return 0;
        }
}
cout << "NO";
return 0;
}