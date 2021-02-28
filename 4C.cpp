    #include<bits/stdc++.h>
    using namespace std;
     
        int main()
        {
            int n;
            cin >> n;
            map<string,int> mp;
            while(n--){
                string s ;
                cin >> s;
                if(mp.find(s)!=mp.end()) {
                    mp[s]++;
                    cout << s <<mp[s]<<'\n';
                }
                else {
                    mp[s] = 0;
                    cout << "OK\n";
                }
            }
            return 0;
        }