from queue import Queue


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
    q = Queue()
    q.put('a')
    bfs_re(graph, root, set(), q)
