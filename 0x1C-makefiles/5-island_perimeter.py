#!/usr/bin/python3
"""perimeter module"""


def count(num, li):
    """count number of items in list"""
    count = 0
    for i in li:
        if num == i:
            count += 1
    return count


def island_perimeter(grid):
    """calculate perimeter in a list"""
    if grid is None:
        return
    if len(grid) <= 1:
        return
    max_num = 0
    for i in grid:
        max = (count(1, i))
        if max > max_num:
            max_num = max

    hor = len(grid)
    width = 0
    idx = 0
    new = []
    i = 0
    while idx < hor:
        while i < hor:
            new.append(grid[i][idx])
            i += 1
        max_width = count(1, new)
        if max_width > width:
            width = max_width
        new = []
        i = 0
        idx += 1
    return 2 * (width + max_num)
