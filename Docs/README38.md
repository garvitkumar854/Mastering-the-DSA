# 38. Search in 2D Matrix (Two Variations)

This folder covers two classic variations of searching in 2D matrices, both commonly asked in coding interviews.

---

### 🔎 **Variation 1: Search in a 2D Matrix**

You are given an `m x n` matrix like:
```
1   3   5   7
10  11  16  20
23  30  34  60
```
**Target:** `34`

#### ✅ Problem Statement:
- Each row is sorted in **non-decreasing** order.
- The **first element** of each row is **greater than** the last element of the previous row.
- You must return `true` if the target exists in the matrix, else return `false`.

🔍 This structure allows you to treat the entire 2D matrix as a **flattened sorted array**. Use **binary search** directly over it.

⏱️ **Time Complexity:** `O(log (m × n))`

---

### 🔎 **Variation 2: Search in a 2D Matrix II**

You are given a matrix like:
```
1   4   7   11  15
2   5   8   12  19
3   6   9   16  22
10  13  14  17  24
18  21  23  26  30
```
**Target:** `5`

#### ✅ Problem Statement:
- Each row is sorted in **ascending order** from left to right.
- Each column is sorted in **ascending order** from top to bottom.
- Rows are **not disjoint**, unlike Variation 1.
- Return `true` if the target exists, else return `false`.

🔍 The trick is to start from the **top-right** corner and move:
- **Left** if `target < current`
- **Down** if `target > current`

⏱️ **Time Complexity:** `O(n + m)`

---

## Table of Contents

### 📘 Concept Files
- [📍 Search in Sorted Matrix (Binary Search)](/38_SearchIn2DMatrix/01.cpp)
- [📍 Search in 2D Matrix II (Optimized)](/38_SearchIn2DMatrix/02.cpp)

---
