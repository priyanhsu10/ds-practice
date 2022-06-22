time = 0


def dfs(graph, root, visited: set, pre: dict, post: dict):
    global time
    if root in visited:
        return
    print(root)
    pre[root] = time
    time += 1
    visited.add(root)
    for x in graph[root]:
        dfs(graph, x, visited, pre, post)

    post[root] = time
    time += 1


if __name__ == "__main__":

    graph = {
        0: [1, 3],
        1: [2],
        2: [],
        3: [2, 4],
        4: []
    }
    visited = set()
    pre = {}
    post = {}
    dfs(graph, 0, visited, pre, post)

    for x in graph.keys():
        print(f"{x} :[{pre[x]}/{post[x]}]")
