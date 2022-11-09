#!/usr/bin/python3
"""
module contains a function that returns the perimeter of
the island described in the grid
"""


def island_perimeter(grid):
    """read tge module doc"""
    per = 0
    length__h = len(grid)

    if length__h == 0 or not isinstance(grid, list):
        return

    for n, i in enumerate(grid):
        for j, k in enumerate(i):
            length_w = len(i)
            if k == 1:
                if j == length_w - 1:
                    per += 1
                if j == 0:
                    per += 1
                if j != 0:
                    if i[j - 1] == 0:
                        per += 1
                if j != length_w - 1:
                    if i[j + 1] == 0:
                        per += 1
                if n != 0 and n != length__h - 1:
                    if grid[n - 1][j] == 0:
                        per += 1
                    if grid[n + 1][j] == 0:
                        per += 1
                if n == 0:
                    per += 1
                    if  length__h > 1 and grid[n + 1][j] == 0:
                        per += 1
                if n == length__h - 1:
                    per += 1
                    if grid[n - 1][j] == 0:
                        per += 1
    return per
