# 24. Aggressive Cows

## 🧠 Problem Statement

You are given an array `stalls[]` that represents the **positions of `n` stalls on a straight line**, and an integer `k` representing the number of cows.

Your task is to place the `k` cows in these stalls such that the **minimum distance between any two cows is as large as possible**.

Return the **largest possible minimum distance**.

This problem is solved using **Binary Search on the Answer Space**, where we search for the maximum minimum distance.

---

## 📥 Example

### ✅ Example 1:
```
Input: stalls = [1, 2, 4, 8, 9], k = 3
Output: 3
```
**Explanation:** Place cows at positions 1, 4, and 8 → minimum distance = 3 ✅

### ❌ Example 2:
```
Input: stalls = [5, 10, 15, 25, 30], k = 2
Output: 25
```
**Explanation:** Place cows at 5 and 30 → distance = 25 ❌

---

## 📌 Constraints

- `2 ≤ n ≤ 10^5`
- `0 ≤ stalls[i] ≤ 10^9`
- Stalls can be unsorted (you must sort before applying binary search)
- Use **Binary Search + Greedy Check** in **O(n log d)** where `d` is the distance range

---

## Table of Contents

- [Concept Files](#concept-files)
  - [Problem](/24_Aggressive_Cows/01.cpp)

---
