#include<bits/stdc++.h>

using namespace std;
int visited[100];
stack<int> Stack;

void TopologicalSortUtil(vector<int> *V,int i,stack<int>& Stack){
	visited[i] =  1;
	for(int j=0;j<V[i].size();j++){
		//cout << "VAI " << i << " " << V[i][j] <<" "<< V[i].size()<< endl;
		if(!visited[V[i][j]]){
			//cout << "DHUKSE\n";
			visited[V[i][j]] = 1;
			TopologicalSortUtil(V,V[i][j],Stack);
		}
		////cout<< "berhoise\n";
	}
	//cout << "push karo khush raahoo\n";
	Stack.push(i);
	//return Stack;
}

void TopologicalSort(vector<int> *V,int sze){

	for(int i=1;i<=sze;i++){
		if(!visited[i]){
			TopologicalSortUtil(V,i,Stack);
		}
	}
	while(!Stack.empty()){
		//cout << "ASHCHE\n";
		cout << Stack.top() << endl;
		Stack.pop();
	}
}
int main(){
	int V=5;
	vector<int> Adjv[V+1];
	Adjv[1].push_back(2);
	Adjv[1].push_back(3);
	Adjv[3].push_back(4);
	Adjv[2].push_back(5);
	Adjv[4].push_back(5);
	TopologicalSort(Adjv,5);
}