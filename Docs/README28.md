# 28. Next Permutation

## 🧠 Problem Statement

You are given an array `nums[]` representing a **permutation of numbers**.

Your task is to rearrange the array into the **next lexicographically greater permutation**.

If such arrangement is not possible (i.e., the current permutation is the last one), rearrange it as the **lowest possible (ascending) order**.

You must modify the array in-place and use **constant extra memory**.

This problem is frequently asked in coding rounds and interviews due to its algorithmic pattern.

---

## 📥 Example

### ✅ Example 1:
```
Input: nums = [1, 2, 3]
Output: [1, 3, 2]
```
**Explanation:** The next greater permutation after 1 2 3 is 1 3 2 ✅

### ❌ Example 2:
```
Input: nums = [3, 2, 1]
Output: [1, 2, 3]
```
**Explanation:** It's the last permutation → reset to ascending order ❌

---

## 📌 Constraints

- `1 ≤ nums.length ≤ 10^5`
- `0 ≤ nums[i] ≤ 10^5`
- Must use **O(1)** extra space
- Solve in **O(n)** time by using:
  - Rightmost ascent detection
  - Swap with next greater
  - Reverse suffix

---

## Table of Contents

- [Concept Files](#concept-files)
  - [Problem](/28_Next_Permutation/01.cpp)

---
