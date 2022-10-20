#include <map>
#include <set>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
typedef double db; 
typedef long long ll;
typedef unsigned long long ull;
const int N=1000010;
const int LOGN=28;
const ll  TMD=0;
const ll  INF=2147483647;
int n,q,cur;
int a[N],key[N],tag[N],enough[N],tot[N];
ll  ans[N];
vector<int> val;
vector<int> G[N];

struct query
{
	int t,id;
	ll  k;
	
	query() {}
	
	query(int t,ll k,int id):t(t),k(k),id(id) {}
};
vector<query> Q[N];

void DFS(int x,int pre)
{
	tot[x]=tot[pre]+enough[x];
	for(int i=0;i<G[x].size();i++)
	{
		int y=G[x][i];
		if(y==pre) continue;
		DFS(y,x);
	}
}

void init()
{
	scanf("%d",&n);	
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	for(int i=1;i<n;i++)
	{
		int u,v;
		scanf("%d%d",&u,&v);
		G[u].push_back(v);
		G[v].push_back(u);
	}
	scanf("%d",&q);
	for(int i=1;i<=q;i++)
	{
		int x,t;
		ll  k;
		scanf("%d%d%lld",&x,&t,&k);
		Q[x].push_back(query(t,k,i));
	}
} 

void solve()
{
	for(int i=1;i<=q;i++) ans[i]=-1;
	for(int i=1;i<=n;i++)
	{
		key[i]+=a[i];
		for(int j=0;j<G[i].size();j++) key[i]+=a[G[i][j]];
		if(!tag[key[i]]&&key[i]) tag[key[i]]=1,val.push_back(key[i]);
	}
	sort(val.begin(),val.end(),greater<int>() );
	for(int i=0;i<val.size();i++)
	{
		for(int j=1;j<=n;j++) if(key[j]>=val[i]) enough[j]=1;
		DFS(1,0);
		for(int j=1;j<=n;j++)
		{
			for(int k=0;k<Q[j].size();k++)
			{
				query qu=Q[j][k];
				if(ans[qu.id]==-1&&tot[j]>=qu.t)
				{
					ll L=0,R=(ll)sqrt(qu.k/val[i]*2+1)+2,M;
					while(L+1!=R)
					{
						M=(L+R)>>1;
						if(M*(1+M)/2*val[i]>=qu.k) R=M;
						else L=M;
					}
					ans[qu.id]=R;
				}	
			}
		}
	}
	for(int i=1;i<=q;i++) printf("%lld\n",ans[i]);
} 

int main()
{
	init();
	solve();
	
	return 0;
}