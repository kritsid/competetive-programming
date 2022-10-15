#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define   pb              push_back
#define   rep(i,a,b)      for(int i=a;i<b;i++)
#define   vl              vector<ll>
#define   vi              vector<int>
#define   lb              lower_bound
#define   ub              upper_bound
#define   print(ans)      printf("%.9f\n",ans)
#define all(x) (x).begin(), (x).end()
typedef int64_t ll;
typedef unsigned long long ull;
typedef long double lld;
#define   pi              pair<ll, int>
#define nline "\n"

//========================================Debugging Starts=================================

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << "\n";
#else
#define debug(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

//==========================================Debugging Ends==========================================

// vector<vector<int>> vec( n , vector<int> (m, 0));
// priority_queue<pi, vector<pi>, greater<pi>>q;

bool prime[100000];
ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
void SieveOfEratosthenes()
{
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= 100000; p++)
	{
		if (prime[p] == true)
		{
			for (int i = p * p; i <= 100000; i += p)
				prime[i] = false;
		}
	}
}
long long binpow(long long a, long long b) {
	a %= MOD;
	long long res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a % MOD;
		a = a * a % MOD;
		b >>= 1;
	}
	return res % MOD
	       ;
}
ll invmd(ll n)
{
	return (binpow(n, MOD - 2));
}
ll ceil2(ll a, ll b) {
	return (a + b - 1) / b;
}
// const int N=1e5+5;
// ll fact[N];
// void calcfactorial()
// {
//     fact[0]=1;
//     rep(i,1,N-1)
//     {
//         fact[i]=(fact[i-1]*i)%MOD;

//     }
// }
// ll ncr(ll n, ll k) {
//     return fact[n] * invmd(fact[k] * fact[n - k] % MOD) % MOD;
// }

void solve()
{
	int b, w;
	cin >> b >> w;
	if(b+w==1)
	{
		if(b==1)
		{

		cout<<'B'<<nline;
		}
		else
		{
		cout<<'W'<<nline;


		}
		return;
	}
	if (b == 0 || w == 0)
	{
		cout << -1 << nline;
		return;
	}
	if (b + w == 2)
	{
		cout << "BW" << nline;
		cout << 1 << " " << 2 << nline;
		return;
	}
	int n = b + w;
	vector<char>ans(n + 1, 0);
	vector<pair<int, int>>edges;
	if (b > w)
	{
		ans[2] = 'B';
		ans[3] = 'B';
		ans[1] = 'W';
		b = b - 2;
		w = w - 1;
		edges.pb({1, 2});
		edges.pb({1, 3});



	}
	else
	{
		ans[2] = 'W';
		ans[3] = 'W';
		ans[1] = 'B';
		w = w - 2;
		b = b - 1;
		edges.pb({1, 2});
		edges.pb({1, 3});

	}
	int node = 4;
	while (b--)
	{
		ans[node] = 'B';
		edges.pb({1,node});
		node++;

	}
	while (w--)
	{
		edges.pb({1,node});

		ans[node] = 'W';
		node++;

	}
	// debug(ans);
	for(int i=1;i<n+1;i++)
	{
		cout<<ans[i];
	}
	cout<<nline;
	for(auto it:edges)
	{
		cout<<it.first<<" "<<it.second<<nline;
	}


}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}