

def howsum(arry, target: int, memo):
    if memo == None:
        memo = {}
    if target in memo:
        return memo[target]

    if target == 0:
        return []
    if target < 0:
        return None

    for x in arry:
        remender = target-x
        r = howsum(arry, remender, memo)

        if(r != None):
            memo[target] = [x, *r]
            return memo[target]

    memo[target] = None

    return None


print(__name__)
if __name__ == "__main__":
    # print(howsum([2, 3], 7))
    print(howsum([5, 3, 4, 7], 7, {}))
    print(howsum([2, 4], 7, {}))
    print(howsum([2, 3, 5], 8, {}))
    print(howsum([7, 14], 300, {}))
