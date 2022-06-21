from queue import Queue


def bfs(graph, node, visited: set):
    q = Queue()
    q.put(node)
    visited.add(node)
    while not q.empty():
        item = q.get()
        print(item)
        for x in graph[item]:
            if x not in visited:
                q.put(x)


def bfs_re(graph, node, visited: set, queue: Queue):
    if (queue.empty()):
        return

    if(node in visited):
        return

    print(node)
    visited.add(node)
    for x in graph[node]:
        queue.put(x)
        bfs_re(graph, x, visited, queue)


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
    bfs(graph, root, visited)
    q = Queue()
    q.put('a')
    bfs_re(graph, root, set(), q)
