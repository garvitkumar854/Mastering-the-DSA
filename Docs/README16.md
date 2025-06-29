# 16. Product of Array Except Self

## 🧠 Problem Statement

You are given an integer array `nums[]` of size `n`.  
Your task is to return an array `output[]` such that `output[i]` is equal to the **product of all the elements of `nums` except `nums[i]`**.

You must solve this **without using division** and in **O(n)** time.

---

## 📥 Example

### ✅ Example 1:
```
Input: nums = [1, 2, 3, 4]
Output: [24, 12, 8, 6]
```
**Explanation:**  
- For index 0: 2 * 3 * 4 = 24  
- For index 1: 1 * 3 * 4 = 12  
...and so on ✅

### ❌ Example 2:
```
Input: nums = [0, 1, 2, 3]
Output: [6, 0, 0, 0]
```
**Explanation:** Any product including 0 becomes 0 ❌

---

## 📌 Constraints

- `2 ≤ nums.length ≤ 10^5`
- `-30 ≤ nums[i] ≤ 30`
- Solve in **O(n)** time and **O(1)** extra space (excluding output array)
- **No division allowed**

---

## Table of Contents

- [Concept Files](#concept-files)
  - [Problem](/16_ProductOfArray_Except_Self/01.cpp)

---

