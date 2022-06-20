
def solution():
    grid = [['w', 'l', 'w', 'w', 'l'],
            ['w', 'l', 'w', 'w', 'w'],
            ['w', 'w', 'w', 'l', 'w'],
            ['w', 'w', 'l', 'l', 'w'],
            ['l', 'w', 'w', 'l', 'l'],
            ['l', 'l', 'w', 'w', 'w']]
    visited = set()
    # infinity value
    minsize = 10000000
    for i, _ in enumerate(grid):
        for j, _ in enumerate(grid[i]):
            s = explore(i, j, grid, visited)
            if(s != 0 and s < minsize):
                minsize = s

    print(minsize)


def explore(i, j, grid, visited: set):
    if(i < 0 or i >= len(grid)):
        return 0
    if(j < 0 or j >= len(grid[i])):
        return 0

    if(grid[i][j] == 'w'):
        return 0
    node = (i, j)
    if (node in visited):
        return 0
    visited.add(node)
    size = 1
    # explore top
    size += explore(i-1, j, grid, visited)
    # explore right
    size += explore(i, j+1, grid, visited)
    # explore down
    size += explore(i+1, j, grid, visited)
    # exlore left
    size += explore(i, j-1, grid, visited)

    return size


solution()
