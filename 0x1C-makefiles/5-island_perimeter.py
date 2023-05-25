#!/usr/bin/python3
"""The island_perimeter module."""


def island_perimeter(grid):
    """Function that returns the perimeter of the island described in grid.
    Args:
        grid (list): list representation of an island.
    Return:
        The perimeter of the island described in grid.
    """
    height = len(grid)
    width = len(grid[0])
    edge = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i-1][j] == 1):
                    edge += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
    return size * 4 - edge * 2
