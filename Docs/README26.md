# 26. Sort an Array of 0s, 1s, and 2s

## 🧠 Problem Statement

You are given an array `arr[]` consisting of only `0s`, `1s`, and `2s`.

Your task is to **sort the array in-place** such that all `0s` come first, followed by all `1s`, then all `2s`.

You must solve this without using any sorting function and **without counting the number of 0s, 1s, or 2s explicitly**.

The problem is also known as the **Dutch National Flag problem**, and it is often asked in coding interviews.

---

## 📥 Example

### ✅ Example 1:
```
Input: arr = [0, 2, 1, 2, 0]
Output: [0, 0, 1, 2, 2]
```
**Explanation:** The array is rearranged to group 0s, 1s, and 2s ✅

### ❌ Example 2:
```
Input: arr = [2, 2, 1, 0, 1]
Output: [0, 1, 1, 2, 2]
```
**Explanation:** All 0s → 1s → 2s in order ❌

---

## 📌 Constraints

- `1 ≤ arr.length ≤ 10^5`
- Elements will only be from `{0, 1, 2}`
- Solve in **O(n)** time and **O(1)** space using the **Dutch National Flag algorithm**

---

## Table of Contents

- [Concept Files](#concept-files)
  - [Problem](/26_SortanArray_Of_0s_1s_2s/01.cpp)

---
