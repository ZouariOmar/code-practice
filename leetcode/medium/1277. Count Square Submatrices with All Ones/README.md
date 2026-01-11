<!-- @format -->

# Complexity

- Time complexity: O(n \* m)
- Space complexity: O(n \* m)

# Explanation Step by Step

## Purpose of the Algorithm

This code counts the total number of square submatrices that contain only 1's in a given binary matrix.

## Initialization Steps

```cpp
// Matrix dimensions
int n = matrix.size();    // rows
int m = matrix[0].size(); // columns
// Create DP table
vector<vector<int>> dp(n, vector<int>(m, 0));
int ans = 0;
```

## Base Cases Setup

```cpp
// First column initialization
for (int i = 0; i < n; i++) {
dp[i][0] = matrix[i][0];
ans += dp[i][0];
}

// First row initialization:
for (int j = 1; j < m; j++) {
dp[0][j] = matrix[0][j];
ans += dp[0][j];
}
```

## Main DP Logic

> For each cell (i,j), if `matrix[i][j]` = 1:

- Look at three adjacent cells: left, top, and diagonal top-left
- Take minimum of these three values and add 1
- This gives the size of the largest square possible at current position:

  ```cpp
  dp[i][j] = 1 + min({dp[i][j-1], dp[i-1][j], dp[i-1][j-1]});
  ```

## Why This Works

`dp[i][j]` represents the size of the largest square submatrix ending at position (i,j)
If any of the three adjacent positions has a smaller value, we can't form a larger square
Adding 1 accounts for the current cell itself

### Example For matrix

```plaintext
1 1 1
1 1 1
1 1 1
```

The DP table becomes:

```plaintext
1 1 1
1 2 2
1 2 3
```

Where each number represents the size of the largest square possible at that position.

## Final Answer

The sum of all values in the DP table gives the total count of all possible squares
Each value in `dp[i][j]` contributes to that many squares ending at position (i,j)
