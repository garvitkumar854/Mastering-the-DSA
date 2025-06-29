# 20. Peak Index in Mountain Array

## 🧠 Problem Statement

You are given a **mountain array** `arr[]` — which means:
- It strictly increases to a single peak element,
- Then strictly decreases after that.

Your task is to find the **index of the peak element** in the array using an efficient approach.

---

## 📥 Example

### ✅ Example 1:
```
Input: arr = [0, 2, 3, 4, 5, 3, 1]
Output: 4
```
**Explanation:** The peak is 5 at index 4 ✅

### ❌ Example 2:
```
Input: arr = [1, 3, 5, 4, 2]
Output: 2
```
**Explanation:** The peak is 5 at index 2 ❌

---

## 📌 Constraints

- `3 ≤ arr.length ≤ 10^5`
- `0 ≤ arr[i] ≤ 10^6`
- Input is **guaranteed** to be a valid mountain array
- Solve in **O(log n)** time using Binary Search
- **Peak index** is always exists
---

## Table of Contents

- [Concept Files](#concept-files)
  - [Problem](/20_Peak_Index_in_Mountain_Array/01.cpp)

---
