# include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
        vector<ll>a, b, c;
        ll n, k;
        cin >> n >> k;
        for(int i=0; i<n; i++){
            ll t, x ,y ;
            cin >> t >> x >> y;
            if(x==1 && y==1) c.push_back(t);
            else if(x==1) a.push_back(t);
            else if(y==1) b.push_back(t);

        }
        sort(c.begin(), c.end());
        sort(b.begin(), b.end());
        sort(a.begin(), a.end());
        deque<ll> an, al, bo;
        for(auto x: c) an.push_back(x);
        for(auto x: a) al.push_back(x);
        for(auto x: b) bo.push_back(x);
        int siz= 0;
        ll ans = 0;
        while(siz<k && al.size()>0 && bo.size()>0 && an.size()>0){
            ll alf = al.front(); ll bof = bo.front(); ll anf = an.front(); ll albof = alf + bof;
            if(albof>=anf) {ans += anf; an.pop_front();}
            else {ans += albof; al.pop_front(); bo.pop_front();}
            siz++;
        }
        int moreNeeded = k-siz;
        if(moreNeeded>0){
            if(an.size()==0){
                if(al.size()<moreNeeded || bo.size()<moreNeeded) {printf("-1"); return 0;}
                else {
                    for(int i=0; i<moreNeeded; i++){
                        ans += al.front() + bo.front();
                        al.pop_front(); bo.pop_front();
                    }
                }
            }
            else {
                if(an.size()<moreNeeded) {printf("-1"); return 0;}
                else {
                    for(int i=0; i<moreNeeded; i++){
                        ans += an.front();
                        an.pop_front();
                    }
                }
            }
        }
       cout << ans;
       return 0;
    }