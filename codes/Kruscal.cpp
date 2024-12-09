#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, weight;

    bool operator<(const Edge& other) const {
        return weight < other.weight;
    }
};
int find(int arr[], int u, int v) {
    if (arr[u] == arr[v]) {
        return 1;
    } else {
        return 0;
    }
}

void unionSets(int arr[], int n, int u, int v) {
    int temp = arr[u];
    for (int i = 0; i < n; i++) {
        if (arr[i] == temp) {
            arr[i] = arr[v];
        }
    }
}

int kruskal(int n, vector<Edge>& edges) {
    sort(edges.begin(), edges.end());

    int arr[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = i;
    }

    int mst_weight = 0;
    vector<Edge> mst_edges;

    for (size_t i = 0; i < edges.size(); ++i) {
        if (find(arr, edges[i].u, edges[i].v) == 0) {
            unionSets(arr, n, edges[i].u, edges[i].v);
            mst_weight += edges[i].weight;
            mst_edges.push_back(edges[i]);
        }
    }

    cout << "Edges in the MST:\n";
    for (size_t i = 0; i < mst_edges.size(); ++i) {
        cout << mst_edges[i].u << " -- " << mst_edges[i].v
             << " (Weight: " << mst_edges[i].weight << ")\n";
    }
    return mst_weight;
}
int main() {
    int n, m;
    cout << "Enter the number of vertices: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> m;

    vector<Edge> edges;
    cout << "Enter the edges (u, v, weight):\n";
    for (int i = 0; i < m; ++i) {
        int u, v, weight;
        cin >> u >> v >> weight;
        Edge edge;
        edge.u = u;
        edge.v = v;
        edge.weight = weight;
        edges.push_back(edge);
    }
    int mst_weight = kruskal(n, edges);
    cout << "Total weight of MST: " << mst_weight << endl;
    return 0;
}
