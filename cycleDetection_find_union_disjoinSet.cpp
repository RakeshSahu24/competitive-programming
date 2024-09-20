#include <bits/stdc++.h>
using namespace std;

vector<int> parent;
int find(int node) {
    if (parent[node] == -1 ) return node;

    return find(parent[node]);
}
bool isCyclic(vector<pair<int, int>> & adjList) {
    for (auto &it : adjList ) {
        int ar_x = find(it.first);
        int ar_y = find(it.second);

        if (ar_x == ar_y) return true;

        parent[ar_x] = ar_y;
    }

    return false;
}

int main() {

    int E, V;
    cin >> E >> V;
    parent.resize(V, -1);
    vector<pair<int, int>> adjList;
    for (int i = 0; i  < E; i++ ) {
        int from, to;
        cin >> from >> to;
        adjList.push_back({from, to});
    }

    if (isCyclic(adjList)) cout << "True";
    else cout << "False\n";

    return 0;
}
