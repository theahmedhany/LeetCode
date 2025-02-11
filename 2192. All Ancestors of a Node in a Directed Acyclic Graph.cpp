// 2192. All Ancestors of a Node in a Directed Acyclic Graph : https://leetcode.com/problems/all-ancestors-of-a-node-in-a-directed-acyclic-graph/

class Solution {
    public:
        vector<vector<int>> graph, ans;
    
        void dfs(int par, int node, vector<bool>& vis) {
            vis[node] = true;
    
            for (int child : graph[node]) {
                if (!vis[child]) {
                    ans[child].push_back(par);
                    dfs(par, child, vis);
                }
            }
        }
        vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
            graph = ans = vector<vector<int>>(n);
    
            for (auto edge : edges) {
                graph[edge[0]].push_back(edge[1]);
            }
    
            for (int i = 0; i < n; i++) {
                vector<bool> vis(n);
                dfs(i, i, vis);
            }
    
            for (int i = 0; i < n; i++) {
                sort(ans[i].begin(), ans[i].end());
            }
    
            return ans;
        }
    };