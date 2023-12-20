#!/usr/bin/python3
"""Module that defines an island perimeter function"""


def island_perimeter(grid):
    """
        Calcuates the perimiter of an island.

        The grid represents water by 0 and land by 1.

        Args:
            grid (list): A list of list of integers representing an island.
        Returns:
            The perimeter of the island.
    """
    visited = set()

    def dfs(i, j):
        """Performs Depth First Search."""

        # Base Case if search reach out-of-bounds or we reach a water cell
        if i >= len(grid) or j >= len(grid[0]) or i < 0 or j < 0 \
                or grid[i][j] == 0:
            return 1

        # Base case if re-visit a cell
        if (i, j) in visited:
            return 0

        # Add visited cell to set
        visited.add((i, j))

        # perform dfs
        perimeter = dfs(i, j + 1)
        perimeter += dfs(i + 1, j)
        perimeter += dfs(i, j - 1)
        perimeter += dfs(i - 1, j)

        return perimeter

    # Call dfs
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j]:
                return dfs(i, j)
