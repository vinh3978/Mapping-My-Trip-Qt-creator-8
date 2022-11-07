#include<bits/stdc++.h>
using namespace std;

class BFSGraph
{
    int Vnum;    // Number of vertices

    // Pointer to an array containing adjacency lists
    vector<list<int>> adj;
public:
    Graph(int Vnum);  // Constructor

    // function to add an edge to graph
    void addEdge(int v, int w);

    void BFS(int s);
};

Graph::Graph(int Vnum)
{
    this->Vnum = Vnum;
    adj.resize(Vnum);
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

void Graph::BFS(int s)
{
    // Mark all the vertices as not visited
    vector<bool> visited;
    visited.resize(Vnum,false);

    // Create a queue for BFS
    list<int> queue;

    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);

    while(!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        // If a adjacent has not been visited,
        // then mark it visited and enqueue it
        for (auto adjecent: adj[s])
        {
            if (!visited[adjecent])
            {
                visited[adjecent] = true;
                queue.push_back(adjecent);
            }
        }
    }
}

int main()
{
    // Create a graph
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "BFS result: "
         << "(starting from vertex 1) \n";
    g.BFS(1);

    return 0;
}
