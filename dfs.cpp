//tree n nodes h to n-1 edges hogi 
//tree are non cyclic graph 
//lca lowest comman ancestor are first comman parent of two nodes 
//in order to store tree we use adjacant matrix or adjacant list
//In Adjacant matrix space complexity is more O(N^2) but it is easy to check node is connected or not 
//In Adjacant list space complexity is less O(V+E) but for connection check we iterate all via loop 


//full bt have either 0 or child
//complete bt have all level filled except last or have left as possible
//perfect bt have all leaf node at same level
//balance bt have height log(no of nodes) 
// degenerate bt have single children of all nodes



#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;

vector<int> g[N];
bool vis[N];

void dfs(int vertex){
    cout<<vertex<<endl;
    vis[vertex] = true;
    for(int child : g[vertex]){
        cout<<"par "<<vertex<<", child "<<child<<endl;
        if(vis[child]) continue;
        dfs(child);
    }

}

int main(){
    int n,m;
     int v1,v2;
    cin>>n>>m;
    for(int i=0;i<m;++i){ 
       
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }

    dfs(1);

}

/*
//Count no of connected components

#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;

vector<int> g[N];
bool vis[N];

void dfs(int vertex){
    vis[vertex] = true;
    for(int child : g[vertex]){
        if(vis[child]) continue;
        dfs(child);
    }

}

int main(){
    int n,m;
     int v1,v2;
     int cnt=0;
    cin>>n>>m;
    for(int i=0;i<m;++i){ 
       
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }
    for(int i=1;i<=n;i++){
        if(vis[i]) continue;
        dfs(i);
        cnt++;
    }
    cout<<cnt<<endl;

}

*/

/*
// print all connected components
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;

vector<int> g[N];
bool vis[N];
vector<vector<int>> cc;
vector<int> c;

void dfs(int vertex){
    vis[vertex] = true;
    c.push_back(vertex);
    for(int child : g[vertex]){
        if(vis[child]) continue;
        dfs(child);
    }

}

int main(){
    int n,m;
     int v1,v2;
     int cnt=0;
    cin>>n>>m;
    for(int i=0;i<m;++i){ 
       
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }
    for(int i=1;i<=n;i++){
        if(vis[i]) continue;
        c.clear();
        dfs(i);
        cc.push_back(c);
        
    }
    cout<<cc.size()<<endl;
    for(auto i:cc){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}
*/