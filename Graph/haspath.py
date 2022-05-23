
from queue import Queue
from requests import patch


def Soluion():
    graph = {
        'f': ['g', 'i'],
        'g': ['h'],
        'h': [],
        'i': ['g', 'k'],
        'j': ['i'],
        'k': [],

    }
    print(hasPath_depthfirst(graph, 'f', 'k'))

    print(haspath_breadth_first(graph, 'f', 'k'))


def hasPath_depthfirst(graph, source, dest):
    if source == dest:
        return True
    for node in graph[source]:
        if hasPath_depthfirst(graph, node, dest):
            return True

    return False


def haspath_breadth_first(graph, source, dest):
    q = Queue()
    q.put(source)
    while(not q.empty()):
        node = q.get()
        if dest == node:
            return True
        for n in graph[node]:
            q.put(n)

    return False


Soluion()
