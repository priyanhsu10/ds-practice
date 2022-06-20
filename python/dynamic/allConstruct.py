import re
from numpy import result_type


def all_construct(target: str, wordback, memo={}):
    if(target == ''):
        return [[]]

    if target in memo:
        return memo[target]

    result = []
    final = []
    for w in wordback:
        if target.startswith(w):
            nexttarget = target[len(w):]
            r = all_construct(nexttarget, wordback, memo)
            if r == []:
                continue
            targetsubway = [[w, *x] for x in r]

            for n in targetsubway:
                result.append(n)

    memo[target] = result
    return result


if __name__ == "__main__":
    print(all_construct("purple", ['purp', 'p', "ur", 'le', 'prpl']))

    print(all_construct("abcdef", ['ab', 'abc', 'cd', 'def', 'abcd']))

    # print(all_construct("abcdef", ['ab', 'abc', 'cd', 'def', 'abcd']))  # true
    print(all_construct("skateboard", [
          'bo', 'rd', 'ate', 't', 'ska', 'sk', 'boar']))  # false

    print(all_construct("enterapotentpot", [
          'a', 'p', 'ent', 'enter', 'ot', 'o', 't']))  # true
    print(all_construct("eeeeeeeeeeeeeeeeeeeeeeeef", [
          'e', 'ee', 'ee', 'eee', 'eeee', 'eeeee', 'eeeeee']))  # false
