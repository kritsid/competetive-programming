#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim)
{
    uniform_int_distribution<int> uid(0, lim - 1);
    return uid(rang);
}
int mpow(int base, int exp);
void ipgraph(int n, int m);
void dfs(int u, int par);

const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N];


bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first > b.first;
    }
    return a.second < b.second;
}
ll solve()
{
    int n, k;
    si(n);
    si(k);
    int temp2 = 0;
    vpii temp;
    vi ans(n);
    set<int> s;
    unordered_map<int,int> m;
    int i;
    fo(i,n) {
        si(ans[i]);
        s.insert(ans[i]);
        m[ans[i]]++;
    }
    auto it = s.begin();
    fo(i, s.size())
    {
        temp.push_back(make_pair(*it, m[*it]));
        it++;
    }
    int x = 0,x1=-1,x2=0;
    int size = m.size();
    it = s.begin();
    int temp4 = -1;
    int prev = 0;
    int k2 = k;
    for(; it != s.end(); it++) {
        if(it == s.begin()) {
            x = *it-prev;
        } else {
            x = *it-prev-1;
        }
        temp2++;
        if(x > k2) {
            x1 += k2;
            break;
        } else {
            x1 = *it;
        k2 -= x;
        }
        x2 = x;
        prev = *it;
    }
    sort(all(ans));
    int ans1 = 0;
    ans1 = x1+1;
    it = s.end();
    if(n-1-k < 0 || ans[n-1-k] <= x1) return 0;
    temp.erase(temp.begin(),temp.begin()+temp2-1);
    sort(all(temp), comp);
    i = 0;
    int count = 0;
    int k3 = k;
    while(k != 0 && i < temp.size()) {
        temp[i].second -= 1;
        k--;
        if(temp[i].second == 0) {
            i++;
            count++;
        }
    }
    int ans2 = s.size()+(k3-k-count)-ans1;
    if(ans2 < 0) return 0;
    return ans2;
}

int main()
{
    // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    auto start_time = clock();
    while (t--)
    {
        pl(solve());
    }
    auto end_time = clock();
    return 0;
}
