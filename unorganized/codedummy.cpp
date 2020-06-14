#include<bits/stdc++.h>

using namespace std;

//int visited[1002];


/*int dfsUtil(int i,vector<int> v[]){
    visited[i] = 1;
    cout << "CALLED HOYECHI AMI BY " << i << " bhai . er siz eholo" << v[i].size() << endl;
    for(int k=0;k<v[i].size();k++){
        cout << " Omuk "  << i << " bhaiyar loop etaa ami holam " << v[i][k] << endl << endl; 
        if(!visited[v[i][k]]){
            visited[v[i][k]]++;
            dfsUtil(v[i][k],v);
        }
        else{
            cout << "ans paise bhai = "  << v[i][k] << endl;
            return v[i][k];
        }
        cout << "run korse " << k+1 << " Bar bhai\n";
    }
    cout << "Nah Pelam na\n";
    return -1;
}
int dfs(int i,vector<int> v[]){
    for(int j=0;j<1002;j++)
    {
        //visited[j]=0;
    }
    //visited[i] = 1;
    cout << "Pera nai Call disi VAI\n";
    return dfsUtil(i,v);
}*/
int DFSUtil(int u, vector<int> adj[], 
                    vector<bool> &visited) 
{   int x;
    visited[u] = true; 
    //cout << adj[u].size() << " "; 
    for (int i=0; i<adj[u].size(); i++){ 
        if (visited[adj[u][i]] == false){
            //cout << u << " "<< adj[u][i]  << endl;
            return DFSUtil(adj[u][i], adj, visited);
        } 
            else
            {   x = adj[u][i];
                //cout << "Reached there = " << adj[u][i] << endl;
                return adj[u][i];
            }
    }
    return x;
} 
  
// This function does DFSUtil() for all  
// unvisited vertices. 
int DFS(vector<int> adj[], int u) 
{ 
    vector<bool> visited(1001, false); 
    //for (int u=0; u<V; u++) 
        //if (visited[u] == false) 
            return DFSUtil(u, adj, visited); 
} 

int main(){
    int x;
    cin >> x;
    int arr[x+1];
    int ans[x+1];
    vector<int> v[x+1];
    for(int i=1;i<=x;i++){
        cin >> arr[i];
        v[i].push_back(arr[i]);
        //cout << i << " "<< v[i][0] << endl;
    }
    for(int i=1;i<=x;i++){
        ans[i] = DFS(v,i);
    }

    for(int i=1;i<=x;i++){
        cout << ans[i] << " ";
    }
}