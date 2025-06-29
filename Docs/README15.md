# 15. Container With Most Water

## 🧠 Problem Statement

You are given an array `height[]` of length `n`, where each element represents the height of a vertical line on the x-axis.

You need to choose two lines such that, together with the x-axis, they form a container that holds the **maximum amount of water**.

Return the **maximum area** of water that can be contained.

---

## 📥 Example

### ✅ Example 1:
```
Input: height = [1, 8, 6, 2, 5, 4, 8, 3, 7]
Output: 49
```
**Explanation:** Choosing lines at index 1 (height=8) and index 8 (height=7) gives max area = 7 * (8 - 1) = 49 ✅

### ❌ Example 2:
```
Input: height = [1, 1]
Output: 1
```
**Explanation:** Only two lines available → area = 1 * (1 - 0) = 1 ❌

---

## 📌 Constraints

- `2 ≤ height.length ≤ 10^5`
- `0 ≤ height[i] ≤ 10^4`
- Must solve in **O(n)** time using the **two-pointer technique**

---

## Table of Contents

- [Concept Files](#concept-files)
  - [Problem](/15_Container_With_Most_Water/01.cpp)

---

