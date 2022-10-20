#include "bits/stdc++.h"
// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;
using ll = long long int;
mt19937_64 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);

	const int MX = 5e5 + 10;
	vector<basic_string<int>> facs(MX);
	vector<int> val(MX);
	for (int i = 1; i < MX; ++i) for (int j = i; j < MX; j += i) {
		facs[j].push_back(i);
		if (j > i) val[j] = 1 + val[i];
	}

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a(n+1);
		a[0] = 1;
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}

		const int SZ = 210;
		array<int, SZ> dp{};
		int ans = 0;
		for (int i = 1; i <= n; ++i) {
			array<int, SZ> curdp{};
			int ptr = 0, mn = INT_MAX;
			ans = INT_MAX;
			auto &prv = facs[a[i-1]];
			auto &cur = facs[a[i]];
			for (int j = 0; j < cur.size(); ++j) {
				int d = cur[j];
				while (ptr < prv.size()) {
					if (prv[ptr] <= d) {
						mn = min(mn, dp[ptr]);
						++ptr;
					}
					else break;
				}
				curdp[j] = mn + val[a[i]/d];
				ans = min(ans, curdp[j]);
			}
			swap(dp, curdp);
		}
		cout << ans << '\n';
	}
}