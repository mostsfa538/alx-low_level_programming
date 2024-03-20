#!/usr/bin/python3

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    Args:
        grid (list of list of int): The grid representing the island,
        where 1 represents land and 0 represents water.
    Returns:
        int: The perimeter of the island.
    """
    checkOnes = 0
    firstShow_row = 0
    firstShow_coulm = 0
    lastShow_row = 0
    lastShow_coulm = 0
    for row in range(len(grid)):
        for column in range(len(grid[0])):
            if grid[row][column] == 1 and checkOnes == 0:
                checkOnes = 1
                firstShow_row = row
                firstShow_coulm = column
            elif grid[row][column] == 1:
                lastShow_row = row
                lastShow_coulm = column

    if firstShow_row == 0:
        return 0
    return (lastShow_coulm - firstShow_coulm + 1) * 2 + (lastShow_row - firstShow_row + 1) * 2
