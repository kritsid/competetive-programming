#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <cstring>
#include <time.h>
#include <chrono>
#include <random>
#include <ctime>

using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, arr) for (auto it = arr.begin(); it != arr.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
const int mod = 1e9 + 7;
const ll N = 1e15, M = N;

bool sortbysec(const pair<ll, ll> &arr,
               const pair<ll, ll> &b)
{
    return (arr.second < b.second);
}
auto comp = [](pair<int, int> arr, pii b)
{
    return abs(arr.first) + abs(arr.second) < abs(b.first) + abs(b.second);
};

void read(int i, int n, vl &arr)
{
    for (int j = i; j < n; j++)
        cin >> arr[j];
}

long long gcd(long long a,long long b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

long long lcm(long long a,long long b)
{
    long long g = gcd(a,b);
    return (a*b)/g;
}


void solve()
{
    ll b,q,y,c,r,z;
    cin>>b>>q>>y>>c>>r>>z;
    if(!(((b+(y-1)*q)>=c+(z-1)*r)&& b<=c && r%q==0 && (c-b)%q==0)) {
        cout<<"0\n";
        return;
    }
    if((b+(y-1)*q<c+r*z || b>(c-r))) {
        cout<<"-1\n";
        return;
    }
    ll ans = 0;
    for(ll i = 1; i*i<=r; i++) {
        if(r%i==0) {
            if(lcm(i,q)==r) {
                ll p = ((r/i)*(r/i))%mod;
                ans = (ans+p) % mod;
            }
            if(i*i!=r && lcm(r/i,q)==r) {
                ll p = (i*i) % mod;
                ans = (ans+p) % mod;
            }
        }
    }
    cout<<ans<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }
    return 0;
}
