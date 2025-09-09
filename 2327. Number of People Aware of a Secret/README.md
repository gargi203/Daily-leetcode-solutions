# Problem: Number of People Aware of a Secret

## Problem Summary

This problem asks to calculate how many people know a secret on day `n`, given that each person starts sharing the secret after a delay `delay` days and forgets it after `forget` days. The sharing and forgetting process repeats every day, and the result should be returned modulo \(10^9 + 7\).

---

## My Approach and Solution

I used a dynamic programming approach to solve this:

- I created an array `dp` where `dp[i]` represents the number of people who **first learn** the secret on day `i`.
- On day 1, exactly one person knows the secret, so `dp[1] = 1`.
- I maintained a variable `share` which tracks the total number of people who can share the secret on any given day.
- For each day from 2 to `n`:
  - I added to `share` the count of people who become eligible to share the secret that day (those who learned it `delay` days ago).
  - I subtracted from `share` the count of people who forget the secret that day (those who learned it `forget` days ago).
  - The number of new people learning the secret that day is equal to `share`.
- Finally, I summed the people who still remember the secret at the end, i.e., those who learned it within the last `forget` days.

This approach efficiently tracks how the secret spreads and fades over the days without simulating each person individually.

---

## What I Learned

- Using a DP array to track when people learn the secret helps manage the timing constraints cleanly.
- Maintaining a running total (`share`) of people eligible to share simplifies the computation.
- Modulo arithmetic is important to prevent overflow in problems involving large numbers.
- This approach runs efficiently in \(O(n)\) time, suitable for large values of `n`.

---

