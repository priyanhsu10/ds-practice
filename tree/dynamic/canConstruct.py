

from pickle import TRUE


def can_contruct(target: str, wordbank, memo={}):
    if target == '':
        return True
    if target in memo:
        return memo[target]

    for w in wordbank:
        if target.startswith(w):
            nextTarget = target[len(w):]
            memo[target] = can_contruct(nextTarget, wordbank, memo)
            if(memo[target] == TRUE):
                return True

    memo[target] = False
    return False


if __name__ == "__main__":
    print(can_contruct("abcdef", ['ab', 'abc', 'cd', 'def', 'abcd']))  # true
    print(can_contruct("skateboard", [
          'bo', 'rd', 'ate', 't', 'ska', 'sk', 'boar']))  # false

    print(can_contruct("enterapotentpot", [
          'a', 'p', 'ent', 'enter', 'ot', 'o', 't']))  # true
    print(can_contruct("eeeeeeeeeeeeeeeeeeeeeeeef", [
          'e', 'ee', 'ee', 'eee', 'eeee', 'eeeee', 'eeeeee']))  # false
