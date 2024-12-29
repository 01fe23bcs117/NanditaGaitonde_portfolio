#include <iostream>
#include <vector>
#include <climits>
#include <queue>

using namespace std;

// Structure to represent an edge in the graph
struct Edge {
    int u, v, weight;
    Edge(int u, int v, int weight) : u(u), v(v), weight(weight) {}
};

// Comparison function for the priority queue (min-heap)
struct CompareEdge {
    bool operator()(Edge const &e1, Edge const &e2) {
        return e1.weight > e2.weight; // Return true if e1 has greater weight than e2
    }
};

class Prim {
public:
    // Function to find the Minimum Spanning Tree using Prim's Algorithm
    vector<Edge> primMST(int V, vector<vector<int>>& adjMatrix) {
        vector<bool> inMST(V, false); // Track vertices included in MST
        vector<int> parent(V, -1);     // Store parent of each vertex in MST
        vector<int> key(V, INT_MAX);   // Store the key values (min edge weight) for each vertex
        priority_queue<Edge, vector<Edge>, CompareEdge> pq;  // Min-heap priority queue

        // Initialize the priority queue with the first vertex (source)
        key[0] = 0;
        pq.push(Edge(-1, 0, 0));  // No parent for source vertex (source, key = 0)

        while (!pq.empty()) {
            int u = pq.top().v;
            pq.pop();

            if (inMST[u]) continue; // Skip if the vertex is already included in MST
            inMST[u] = true; // Mark the vertex as included in MST

            // Traverse all adjacent vertices of u
            for (int v = 0; v < V; v++) {
                if (!inMST[v] && adjMatrix[u][v] != 0 && adjMatrix[u][v] < key[v]) {
                    // Update the key value and parent for vertex v
                    key[v] = adjMatrix[u][v];
                    parent[v] = u;
                    pq.push(Edge(u, v, key[v]));  // Push the vertex to the priority queue
                }
            }
        }

        // Collect the edges of the MST
        vector<Edge> mstEdges;
        for (int i = 1; i < V; i++) {
            if (parent[i] != -1) {
                mstEdges.push_back(Edge(parent[i], i, adjMatrix[i][parent[i]]));
            }
        }
        return mstEdges;
    }

    // Function to print the MST
    void printMST(const vector<Edge>& mstEdges) {
        cout << "Edges in the MST:" << endl;
        int totalWeight = 0;
        for (const auto& edge : mstEdges) {
            cout << edge.u << " - " << edge.v << " : " << edge.weight << endl;
            totalWeight += edge.weight;
        }
        cout << "Total weight of the MST: " << totalWeight << endl;
    }
};

int main() {
    int V, E;
    cout << "Enter the number of vertices and edges: ";
    cin >> V >> E;

    // Adjacency matrix to represent the graph
    vector<vector<int>> adjMatrix(V, vector<int>(V, 0));

    cout << "Enter the edges (u, v, weight) for the graph:" << endl;
    for (int i = 0; i < E; i++) {
        int u, v, weight;
        cin >> u >> v >> weight;
        adjMatrix[u][v] = weight;
        adjMatrix[v][u] = weight;  // Undirected graph
    }

    // Create an object of Prim and find the MST
    Prim prim;
    vector<Edge> mstEdges = prim.primMST(V, adjMatrix);
    
    // Print the edges of the MST
    prim.printMST(mstEdges);

    return 0;
}
