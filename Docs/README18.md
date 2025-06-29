# 18. Binary Search Algorithm

## 🧠 Problem Statement

You are given a **sorted array** `arr[]` of size `n`, and a target value `x`.  
Your task is to find the **index of `x`** in the array using the **Binary Search Algorithm**.

If the element is not found, return `-1`.

Binary Search reduces the search space by half at each step, making it extremely efficient for sorted data.

- [Quiz] Can you Implement Binary Search Algorithm Using Recursion
---

## 📥 Example

### ✅ Example 1:
```
Input: arr = [1, 3, 5, 7, 9, 11], x = 7
Output: 3
```
**Explanation:** Element 7 is found at index 3 ✅

### ❌ Example 2:
```
Input: arr = [2, 4, 6, 8, 10], x = 5
Output: -1
```
**Explanation:** Element 5 is not present in the array ❌

---

## 📌 Constraints

- `1 ≤ n ≤ 10^5`
- `-10^9 ≤ arr[i], x ≤ 10^9`
- Array must be sorted in **ascending order**
- Solve in **O(log n)** time using binary search logic

---

## Table of Contents

- [Concept Files](#concept-files)
  - [Problem](/18_Binary_Search_Algorithm/01.cpp)
  - [Quiz Answer](/18_Binary_Search_Algorithm/02.cpp)

---
