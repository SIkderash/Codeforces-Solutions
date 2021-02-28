#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n; vector<int>v; queue<long long int>q;
	ios::sync_with_stdio(false);
	q.push(4ll); q.push(7ll);
	while(q.front()<=1e9){
        int f = q.front();
        q.pop();
        q.push(f*10ll+4ll);
        q.push(f*10ll+7ll);
        v.push_back(f);
	}
	cin >> n;
	cout << lower_bound(v.begin(), v.end(), n)-v.begin()+1;
	return 0;
}