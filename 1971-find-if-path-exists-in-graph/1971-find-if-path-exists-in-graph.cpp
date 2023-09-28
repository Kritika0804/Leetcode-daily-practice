class Solution {
public:
    
    bool hasPath(vector<vector<int>> &graph, int start, int end, vector<bool> &visited){
        if(start == end) return true;
        
        visited[start] = true;
        
        for (auto nbr : graph[start]) {
            
            if (!(visited[nbr])){
                if (hasPath(graph, nbr, end, visited)) return true;
            }
        }
        
        
        return false;
    }


    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n, vector<int>());
        
        vector<bool> visited(n, false);
        
        for (auto edge : edges) {
            int u = edge[0], v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);	
        }
        
        return hasPath(graph, source, destination, visited);
    }
};