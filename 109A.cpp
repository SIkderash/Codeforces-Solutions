    #include<bits/stdc++.h>
    using namespace std;
     
        int main()
        {
            int n;
            cin >> n;
            
            int m = (n%4+4)%4;

            if(m==0) {
                int k = n/4;
                 int sev = 0;
                if(k>7) sev = 4*(k/7); k%=7;
                for(int i=0; i<k; i++) cout << 4;
                for(int i=0; i<sev; i++) cout << 7;
                
            }
            else if(m==3) {
                int k = (n-7)/4;
                 int sev = 0;
                if(k>7) sev = 4*(k/7); k%=7;
                if(n<7) {
                cout << -1;
            }   else{
                for(int i=0; i<k; i++) cout << 4;
                for(int i=0; i<sev; i++) cout << 7;
                cout << 7;
            }
            }
            else if(m==2) {
                int k = (n-14)/4;
                int sev = 0;
                if(k>7) sev = 4*(k/7); k%=7;
                if(n<14) {
                cout << -1;
            }   else{
                for(int i=0; i<k; i++) cout << 4;
                for(int i=0; i<sev; i++) cout << 7;
                cout << 77;
            }
            }
            else if(m==1) {
                int k = (n-21)/4;
                 int sev = 0;
                if(k>7) sev = 4*(k/7); k%=7;
                if(n<21) {
                cout << -1;
            }   else{
                for(int i=0; i<k; i++) cout << 4;
                for(int i=0; i<sev; i++) cout << 7;
                cout << 777;
            }
            }
            return 0;
        }