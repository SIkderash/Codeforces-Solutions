#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n; vector<long long int>v; queue<pair<long long int , int> >q;
	ios::sync_with_stdio(false);
	q.push(make_pair(4,1)); q.push(make_pair(7,-1));
	while(q.front().first<=4444477777){
        pair<long long int,int> f = q.front();
        q.pop();
        q.push(make_pair(f.first*10+4,f.second+1));
        q.push(make_pair(f.first*10+7,f.second-1));
        if(f.second==0) v.push_back(f.first);
	}
	cin >> n;
	cout << v[lower_bound(v.begin(), v.end(), n)-v.begin()];
	return 0;
}