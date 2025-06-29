# 27. Merge Two Sorted Arrays

## 🧠 Problem Statement

You are given two **sorted arrays** `arr1[]` and `arr2[]` of sizes `n` and `m` respectively.

Your task is to **merge them into a single sorted array** and return the result.  
The final merged array should also be **in non-decreasing order**.

This is a classic problem involving the **two-pointer technique** and is often a key step in **merge sort**.

---

## 📥 Example

### ✅ Example 1:
```
Input: arr1 = [1, 3, 5], arr2 = [2, 4, 6]
Output: [1, 2, 3, 4, 5, 6]
```
**Explanation:** Both arrays are merged in sorted order ✅

### ❌ Example 2:
```
Input: arr1 = [1, 4, 7], arr2 = [2, 3, 9]
Output: [1, 2, 3, 4, 7, 9]
```
**Explanation:** Elements are merged while maintaining sort order ❌

---

## 📌 Constraints

- `1 ≤ n, m ≤ 10^5`
- `-10^9 ≤ arr[i] ≤ 10^9`
- Arrays are **already sorted**
- Expected time: **O(n + m)** and space: **O(n + m)**

> You may also be asked to **merge without using extra space** (in-place merge variation)

---

## Table of Contents

- [Concept Files](#concept-files)
  - [Problem](/27_Merge_2_Sorted_Arrays/01.cpp)

---
