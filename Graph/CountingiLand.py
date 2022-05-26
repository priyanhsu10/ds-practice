def solution():
    grid = [['w', 'l', 'w', 'w', 'w'],
            ['w', 'l', 'w', 'w', 'w'],
            ['w', 'w', 'w', 'l', 'w'],
            ['w', 'w', 'l', 'l', 'w'],
            ['l', 'w', 'w', 'l', 'l'],
            ['l', 'l', 'w', 'w', 'w']]
    visited = set()
    count = 0

    for i, _ in enumerate(grid):
        for j, _ in enumerate(grid[i]):
            if(explore(i, j, grid, visited)):
                count += 1

    print(count)


def explore(i, j, grid, visited: set):
    # guard against the odds

    if i < 0 or i >= len(grid):
        return False
    if(j < 0 or j >= len(grid[0])):
        return False
    if(grid[i][j] == 'w'):
        return False
    node = (i, j)
    if(node in visited):
        return False

    visited.add(node)

    # explore
    # explore up
    explore(i-1, j, grid, visited)
    # explore down
    explore(i+1, j, grid, visited)
    # explore left
    explore(i, j+1, grid, visited)

    # explore right
    explore(i, j-1, grid, visited)
    return True


solution()
