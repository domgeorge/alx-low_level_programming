#!/usr/bin/python3
"""
Func returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    Calculate perimeter of the island

    Argument:
        grid: The grid representing the island

    returns:
        int: The perimeter of the island
    """
    peri = 0

    for u in range(len(grid)):
        for v in range(len(grid[0])):
            if grid[u][v] == 1:
                peri += 4
                if u > 0 and grid[u - 1][v] == 1:
                    peri -= 2
                if v > 0 and grid[u][v - 1] == 1:
                    peri -= 2
    return peri
