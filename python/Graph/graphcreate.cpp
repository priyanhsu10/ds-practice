// #include <iostream>
// #include <queue>
// #include <set>
// using namespace std;

// class Graph
// {
//     int m_v;
//     vector<vector<int> > list;

// public:
//     Graph(int t_v) : m_v(t_v), list(t_v) {}
//     void addEdge(int u, int v)
//     {
//         list[u].push_back(v);
//     }
//     void bfs(int s)
//     {

//         queue<int> q;
//         vector<int> visited;
//         q.push(s);
//         while (!q.empty())
//         {
//             int value = q.front();
//             cout << value << endl;
//             for (int u : list[value])
//             {

//                 q.push(u);
//                 visited[u] = true;
//             }
//         }
//     }
// };
// int main()
// {

//     Graph g(5);
//     g.addEdge(0, 1);
//     g.addEdge(0, 2);
//     g.addEdge(1, 2);
//     g.addEdge(3, 2);
//     g.addEdge(3, 4);
//     g.bfs(0);

//     return 0;
// }