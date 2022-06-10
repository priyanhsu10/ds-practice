
import math


def insert_heap(h: list, number):
    h.append(number)
    l = len(h)-1
    # compare with parent swap
    p_index = math.floor(((l-1)/2))
    while p_index > -1:

        if h[p_index] < h[l]:
            # swap
            temp = h[p_index]
            h[p_index] = h[l]
            h[l] = temp
            l = p_index
            p_index = math.floor((l-1)/2)

    return h


if __name__ == "__main__":

    h = [50, 30, 20, 15, 10, 8, 16]

    # intert into hep
    h = insert_heap(h, 60)
    print(h)

    #output [60,50,20,30,10,8,16,15]
