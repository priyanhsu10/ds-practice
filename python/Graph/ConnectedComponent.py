
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
    count = 0
    for key in graph.keys():
        if(explore(graph, key, visited)):
            count += 1

    print(count)


def explore(graph, current, visited: set):
    if current in visited:
        return False

    visited.add(current)

    for node in graph[current]:
        explore(graph, node, visited)

    return True


solution()
