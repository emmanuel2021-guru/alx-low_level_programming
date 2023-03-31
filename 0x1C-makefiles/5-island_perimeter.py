#!/usr/bin/python3

"""This module calculates the perimeter of an island described in grid"""


def island_perimeter(grid):
    """Function to calculate the perimeter"""
    count = 0

    for i in grid:
        for j in i:
            if j == 1:
                count += 1
                break
    i = 0
    j = 0
    for j in range(len(grid[0])):
        for i in range(len(grid)):
            if grid[i][j] == 1:
                count += 1
                break
    return (count * 2)
