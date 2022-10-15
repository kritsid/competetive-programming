#include "bits/stdc++.h"
// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;
using ll = long long int;
mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a(n);
		for (int &x : a) cin >> x;
		sort(begin(a), end(a));
		int ans = 0;
		for (int i = 0; i < n; ) {
			int j = i;
			while (j < n and a[j] == a[i]) ++j;
			ans = max(ans, a[i] + j - i - 1);
			i = j;
		}
		cout << ans << '\n';
	}
}