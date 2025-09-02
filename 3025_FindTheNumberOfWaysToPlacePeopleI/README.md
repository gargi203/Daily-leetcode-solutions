# My Approach and Solution

For this problem, I needed to count pairs of points \((i, j)\) where point \(i\) is positioned at or to the left and above point \(j\), and the rectangle formed by these two points contains no other points inside it.

## How I Solved It

- First, I sorted all the points by their x-coordinate in ascending order. When two points had the same x, I sorted them by y-coordinate in descending order. This helped me organize the points to efficiently check pairs.

- Then, for each point \(i\) acting as the upper-left corner, I looked at all points \(j\) that come after it. I checked if \(x_i \leq x_j\) and \(y_i \geq y_j\) to make sure \(j\) was positioned correctly relative to \(i\).

- To ensure there were no points inside the rectangle between \(i\) and \(j\), I tracked the highest y-coordinate (`maxY`) I’ve seen so far for valid pairs. If the y of point \(j\) was greater than this `maxY` and still below or equal to \(y_i\), I counted that pair.

- This way, I avoided checking every point inside the rectangle explicitly. Sorting and tracking `maxY` made the process much faster and easier for me.

## What I Learned

- Sorting the points carefully was key to simplifying the problem.

- Using a variable like `maxY` helped me keep track of points' positions and avoid unnecessary checks.

- Overall, this approach balanced clarity with efficiency, helping me solve the problem within reasonable time.
