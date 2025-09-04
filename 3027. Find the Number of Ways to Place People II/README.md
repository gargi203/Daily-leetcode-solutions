# Problem: Number of Pairs with No Points Inside Rectangle

## My Approach and Solution

For this problem, I wanted to count valid pairs of points \((i, j)\) such that point \(i\) is to the right or at the same x-position as point \(j\), and the rectangle formed by these two points contains no other point in between. My solution is designed for efficiency and clarity by leveraging sorting and a careful scan.

### How I Solved It

- **Custom Sorting:**  
  I sorted all points in descending order by their x-coordinate, and for points with the same x, in ascending order by y. This order makes it easier to scan for valid pairs.

- **Scanning for Pairs:**  
  For each point \(i\), I initialize a variable `y` to `INT_MAX`. Then, for every point \(j\) after \(i\), I check if \(y_j \geq y_i\) and if `y > y_j`. If so, it means point \(j\) is a valid candidate, so I increment my answer and update `y`. If \(y_i == y_j\), I can break early to avoid unnecessary checks.

- **Fast I/O:**  
  I used a static lambda at the start of my solution to set up fast I/O for competitive environments.

### What I Learned

- Sorting points with a custom comparator can greatly simplify two-dimensional geometry problems.
- Early breaking and careful variable updating (with `y`) help avoid redundant checks, leading to a more efficient solution.
- Fast input/output setup can save time for large datasets in contests.


