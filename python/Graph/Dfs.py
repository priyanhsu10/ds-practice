def dfs(graph, node, visited: set):
    if node in visited:
        return
    print(node)
    visited.add(node)
    for n in graph[node]:
        if(n not in visited):
            dfs(graph, n, visited)


if __name__ == "__main__":

    graph = {'a': ['b', 'c'],
             'b': ['d'],
             'c': ['e'],
             'd': ['f'],
             'e': [],
             'f': []
             }
    visited = set()
    root = 'a'
    dfs(graph, root, visited)
