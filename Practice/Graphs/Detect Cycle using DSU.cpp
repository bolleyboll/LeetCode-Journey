/*
G4G: https://practice.geeksforgeeks.org/problems/detect-cycle-using-dsu/1
*/
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int find(int x, int par[]){
        if(x == par[x]) return x;
        par[x] = find(par[x], par);
        return par[x];
    }
    
    bool unionCycle(int a, int b, int par[], int rank[]){
        int ax = find(a, par);
        int bx = find(b, par);
        
        if(ax==bx && a!=b) return true;
        
        if(ax <  bx) par[ax] = bx;
        else if(ax >  bx) par[bx] = ax;
        else {par[bx] = ax; rank[ax]++;}
        
        return false;
    }
    //Function to detect cycle using DSU in an undirected graph.
	int detectCycle(int V, vector<int>adj[])
	{
	    // Code here
	    int rank[V];
        int par[V];
        
        for(int v=0; v<V; v++){
            par[v] = v;
            rank[v] = 0;
        }
        
        for(int v=0; v<V; v++)
            for(auto u : adj[v])
                if(v < u && unionCycle(u, v, par, rank) == true)
                    return 1;
        return 0;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		int ans = obj.detectCycle(V, adj);
		cout << ans <<"\n";	}
	return 0;
}
// } Driver Code Ends