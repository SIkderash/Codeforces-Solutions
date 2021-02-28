    #include<bits/stdc++.h>
    using namespace std;
     
        int main()
        {
            string s, s1;
            cin >> s;
            int flag = 0;
            for(int i=0; i<s.length(); i++)if(s[i]=='0'){flag = i; break;}
            for(int i=0; i<s.length(); i++){
                if(i==flag) continue;
                cout << s[i];
            } 
            return 0;
        }