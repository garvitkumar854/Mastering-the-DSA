# 19. Search in Rotated Sorted Array

## 🧠 Problem Statement

You are given a **rotated sorted array** `arr[]` of size `n` and an integer `target`.

A rotated array is an array that was initially sorted in ascending order, but then some leading elements were moved to the end.

Your task is to find the **index of the `target` element** in the array using an efficient approach.  
If the element is not found, return `-1`.

---

## 📥 Example

### ✅ Example 1:
```
Input: arr = [4, 5, 6, 7, 0, 1, 2], target = 0
Output: 4
```
**Explanation:** Target 0 is found at index 4 ✅

### ❌ Example 2:
```
Input: arr = [4, 5, 6, 7, 0, 1, 2], target = 3
Output: -1
```
**Explanation:** Target 3 is not in the array ❌

---

## 📌 Constraints

- `1 ≤ arr.length ≤ 10^5`
- `-10^9 ≤ arr[i], target ≤ 10^9`
- Array contains **no duplicate** values
- Solve in **O(log n)** time using a modified binary search

---

## Table of Contents

- [Concept Files](#concept-files)
  - [Problem](/19_Search_in_RotatedSorted_Array/01.cpp)

---
