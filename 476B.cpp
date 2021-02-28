#include <bits/stdc++.h>

using namespace std;
int main()
{
    string a, b;
    cin >> a>> b;
    int pls = 0, q = 0;
    for(int i=0; i<a.length(); i++){
        if(a[i]=='+') pls++;
    }
    for(int j=0; j<b.length(); j++){
            if(b[j]=='+') pls--;
        if(b[j]=='?') q++;
    }
    if(pls>q || pls<0) {cout<<0; return 0;}
    cout.precision(20);
    long double m=q, n, c=1, i = 1;
    n = (1<<q);
    //cout << n << "\n";
    while(m>=q-pls+1){
        c=(c*m)/i;
        m--, i++;
        //cout << c << "\n";
    }
    cout << c/n;
	return 0;
}