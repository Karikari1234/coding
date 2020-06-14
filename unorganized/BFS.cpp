#include<bits/stdc++.h>

using namespace std;

int visited[100];
vector<int> ans;
vector<int> ans2;
vector<int> dfs;
int vis[100];

void bfs(vector<int> *edge,int s)
{
    for(int i=0;i<100;i++){
        visited[i] = 0;
    }
    queue<int> q;
    q.push(s);
    visited[s] = 1;
    while(!q.empty()){
        int w = q.front();
        q.pop();
        ans.push_back(w);
        for(int i=0;i<edge[w].size();i++){
            if(!visited[edge[w][i]]){
                visited[edge[w][i]]=1;
                q.push(edge[w][i]);
            }
        }
    }
}

void dfs(int s,vector<int> *edge){
    vis[s] =  1;
    ans2.push_back(s);
    for(int i = 0;i<edge[s].size();i++){
        if(!vis[edge[s][i]]){
            vis[edge[s][i]]=1;
            dfs(edge[s][i],edge);
            ans2.push_back(edge[s][i]);
        }
    }
}

void dfsTop(int s,vector<int> edge){
    for(int i=0;i<s;i++){
        if(!vis[i]){
            dfs(i,edge);
        }
    }
}
int main(){
    int n , k;
    cin >> n >> k;
    vector<int> edge[n+1];
    for(int i=0;i<k;i++){
        int u,v;
        cin >> u >> v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    dfsTop(2,edge);
    vector<int>::iterator it;
    for(it=ans2.begin();it!=ans2.end();it++){
        cout << *it << endl;
    }
}