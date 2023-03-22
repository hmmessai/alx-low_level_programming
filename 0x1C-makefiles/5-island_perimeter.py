#!usr/bin/python3
"""Defines island_perimeter function"""


def island_perimeter(grid):
    """Computes islands perimeter from grid.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - j][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
