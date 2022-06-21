def dfs_iter(graph, key):
    visited = set()

    st = [key]
    while len(st) > 0:
        item = st.pop()
        visited.add(key)
        print(item)
        for n in graph[item]:
            if(n not in visited):
                st.append(n)


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
    dfs_iter(graph, root)
