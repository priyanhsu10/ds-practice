# shorted path should use breath first traversal
from queue import Queue
import re


def solution():
    adges = [('w', 'x'),
             ('x', 'y'),
             ('z', 'y'),
             ('z', 'v'),
             ('w', 'v'),
             ]
    graph = build_graph(adges)
    print(graph)
    result = shortestPath(graph, 'w', 'z')
    print(result)


def shortestPath(graph, source, dest):
    q = Queue()
    q.put((source, 0))
    visited = set()
    visited.add(source)
    distance = 0
    while(not q.empty()):
        node = q.get()
        for n in graph[node[0]]:
            if(dest == n):
                return node[1]
            if(n not in visited):
                distance += 1
                q.put((n, distance))
                visited.add((n))

    return -1


def build_graph(adges):
    graph = {}
    for i, j in adges:
        if(i not in graph):
            graph[i] = []
        if (j not in graph):
            graph[j] = []

        graph[i].append(j)
        graph[j].append(i)

    return graph


solution()
