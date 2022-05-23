

def solution():
    adges = [('i', 'j'),
             ('k', 'i'),
             ('m', 'k'),
             ('k', 'l'),
             ('o', 'n'),
             ]
    graph = get_graph_from_adge(adges)
    visited = set()
    print(hasPath(graph, 'i', 'n', visited))


def hasPath(graph, source, dest, visited):
    if source in visited:
        return False
    if(source == dest):
        return True
    visited.add(source)
    for node in graph[source]:
        if(hasPath(graph, node, dest, visited)):
            return True

    return False


def get_graph_from_adge(adges):
    graph = {}
    for i, j in adges:
        if i not in graph:
            graph[i] = []
        if j not in graph:
            graph[j] = []
        graph[i].append(j)
        graph[j].append(i)

    return graph


solution()
