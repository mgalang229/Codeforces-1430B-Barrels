#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array;

const ll mxN=2*1e5;
ll a[mxN], n, k;

void solve() {
	cin >> n >> k;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	sort(a, a+n);
	ll max=a[n-1];
	for(int i=n-2; i>=0; --i) {
		if(k!=0) {
			max+=a[i];
			a[i]=0;
			k--;
		}
	}
	ll min=*min_element(a, a+n);
	cout << max-min << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
