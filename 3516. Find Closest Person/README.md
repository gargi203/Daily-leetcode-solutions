# Problem: Find Closest Value

## My Approach and Solution

For this task, I needed to determine which of two integers, `x` or `y`, is closer to a reference value `z`, or if both are equally close.

### How I Solved It

- I calculated the absolute difference between `x` and `z`, and between `y` and `z`.
- If both differences are equal, I returned `0`—signifying a tie.
- If `x` is farther than `y`, I returned `2` to indicate `y` is closer.
- Otherwise, I returned `1` to indicate `x` is closer.

This approach checks the closeness in a simple and efficient way, making use of basic arithmetic operations.

## What I Learned

- Taking the absolute difference allows me to compare closeness regardless of which side of the reference value each number is on.
- Clearly defining return values makes it easy to interpret the results of the function.
