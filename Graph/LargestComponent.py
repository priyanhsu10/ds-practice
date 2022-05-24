from itertools import count


def solution():
    graph = {
        0: [8, 1, 5],
        1: [0],
        5: [0, 8],
        8: [0, 5],
        2: [2, 4],
        3: [2, 4],
        4: [3, 2],
    }
    visited = set()
    largest = 0
    for key in graph.keys():
        count = explore(graph, key, visited)
        print(count)
        if(count > largest):
            largest = count

    print(largest)


def explore(graph, current, visited):
    if(current in visited):
        return 0
    visited.add(current)
    count = 1
    for node in graph[current]:
        count += explore(graph, node, visited)

    return count


solution()
