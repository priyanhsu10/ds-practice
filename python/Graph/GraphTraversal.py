from queue import Queue


def graph_traversal():

    graph = {'a': ['b', 'c'],
             'b': ['d'],
             'c': ['e'],
             'd': ['f'],
             'e': [],
             'f': []
             }
    deftfirst(graph, 'a')
    print("#"*20)
    defth_first_rec(graph, ['a'])
    print("#"*20)
    print("breadth first search")
    breadthFirst(graph, 'a')

#  iteratively solved


def deftfirst(graph, key):
    st = [key]
    while(len(st) > 0):
        node = st.pop()
        print(node)
        for e in graph[node]:
            st.append(e)

#  iteratively solved


def breadthFirst(graph, source):
    queue = Queue()
    queue.put(source)
    while not queue.empty():
        node = queue.get()
        print(node)
        for node in graph[node]:
            queue.put(node)


def defth_first_rec(graph, st):
    if(len(st) == 0):
        return
    key = st.pop()
    print(key)
    for n in graph[key]:
        st.append(n)
    defth_first_rec(graph, st)


graph_traversal()
