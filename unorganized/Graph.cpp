#include<bits/stdc++.h>

using namespace std;


int bfs(int s,int e,map<int,vector<int> > mp,int vertex){
    int visited[10000];  
    memset(visited,0,vertex+1);
    queue<int> q;
    q.push(s);
    int cnt=0;
    int ans;
    //cout << "while er baurejhh";
    while(!q.empty()){
        int x =  q.front();
        q.pop();
        visited[x] = 1;
        for(int i=0;i<mp[x].size();i++){

            if(!visited[mp[x][i]]){
            if(mp[x][i]==e){
                ans =  cnt+1;
                //cout << ans << endl;
                //cout << "SPECIAL BAAL";
                break;
            }
                visited[mp[x][i]]=1;
                q.push(mp[x][i]);
                //cout << " Balda amar ";
            }
            //cout << visited[mp[x][i]] << endl;
            //cout << "BHITRER BAIRE";
        }
        cnt++;
        //cout << "while er moddeh";
    }
    //q.clear();
    return ans;
}

int main(){
    int t;
    cin >> t;
    for(int e=0;e<t;e++){
    int vertex,edge;
    cin >> vertex >> edge;
    map<int,vector<int> > mp;
    map<int,vector<int> >::iterator it;
    for(int i=0;i<edge;i++){
        int u,v;
        cin >> u >> v;
        mp[u].push_back(v);
        mp[v].push_back(u);
    }
    int ans = bfs(1,vertex,mp,vertex);
    cout << ans << endl;
    }
}