# Problem 1792: Maximum Average Pass Ratio

## Problem Summary

Given classes of students where each class has some number of students passing out of the total, and given extra students guaranteed to pass, the goal is to distribute these extra students to maximize the overall average pass ratio across all classes.

---

## My Approach and Solution

I used a greedy approach powered by a priority queue (max heap) to maximize the increase in pass ratio with each extra student added.

- I defined a helper lambda function `gain(p, t)` that calculates the improvement in pass ratio when adding one passing student to a class with `p` passing students out of `t` total.

- I pushed all classes into a max heap prioritized by their potential gain when adding an extra student.

- While there were extra students left, I repeatedly popped the class with the highest gain, added one passing student (incremented `p` and `t`), then pushed the updated class back into the heap.

- After distributing all extra students, I computed the average pass ratio by summing the pass ratios of all classes.

---

## What I Learned

- Using a max heap allowed me to always pick the class that benefits most from an extra student.

- The gain function helped quantify how much each extra student improves the ratio, making the greedy approach effective.

- This solution balances correctness with efficiency, working well even when the number of classes and students is large.
