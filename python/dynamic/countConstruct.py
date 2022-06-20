

def count_construct(target: str, workback, memo={}):
    if(target == ''):
        return 1

    if target in memo:
        return memo[target]

    count = 0
    for w in workback:
        if target.startswith(w):
            nextTarget = target[len(w):]
            count += count_construct(nextTarget, workback, memo)

    memo[target] = count

    return count


if __name__ == "__main__":
    print(count_construct(
        "abcdef", ['ab', 'abc', 'cd', 'def', 'abcd']))  # true
    print(count_construct("skateboard", [
          'bo', 'rd', 'ate', 't', 'ska', 'sk', 'boar']))  # false

    print(count_construct("enterapotentpot", [
          'a', 'p', 'ent', 'enter', 'ot', 'o', 't']))  # true
    print(count_construct("eeeeeeeeeeeeeeeeeeeeeeeef", [
          'e', 'ee', 'ee', 'eee', 'eeee', 'eeeee', 'eeeeee']))  # false
