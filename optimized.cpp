#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array;

bool cmp(const int &a, const int &b) {
	return b<a;
}

void solve() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i=0; i<n; ++i)
		cin >> a[i];
	sort(a, a+n, cmp);
	ll ans=0;
	for(int i=0; i<=k; ++i)
		ans+=a[i];
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
