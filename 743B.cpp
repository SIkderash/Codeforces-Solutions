#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    long long int n, k;
    int ans = 0;
    cin >> n >> k;
    while(k>1){
            if(k%2==1)break;
        k/=2;
        ans++;
    }
    if(ans)cout<<ans+1;
    else cout << 1;
	return 0;
}