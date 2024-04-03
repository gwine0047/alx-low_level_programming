#!/usr/bin/python3
"""Measures and returns an island perumeter."""

def flow_count(grid, a, b):
    """Returns the count of water cell"""
    
    count = 0

    if a <= 0 or not grid[a - 1][b]:
        count += 1
    if b <= 0 or not grid[a][b - 1]:
        count += 1
    if b >= len(grid[a]) - 1 or not grid[a][b + 1]:
        count += 1
    if a >= len(grid) - 1 or not grid[a + 1][b]:
        count += 1
    return count

def island_perimeter(grid):
    """A function that reckons and returns the perimiter of an island.
    The grid represents water by 0 and land by 1."""

    peri = 0
    for a in range(len(grid)):
        for b in range(len(grid[a])):
            if grid[a][b]:
                peri = peri + flow_count(grid, a, b)
    return peri