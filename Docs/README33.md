# 33. Strings – Permutation in String

## 🧠 Problem Statement

You are given two strings:  
- `s1` → the smaller string  
- `s2` → the larger string

Your task is to determine whether **any permutation** of `s1` is a **substring** of `s2`.

In other words, return `true` if `s2` contains a substring with the **same characters** as `s1` (in any order).

This problem is solved using a **sliding window + frequency count** technique for optimal performance.

---

## 📥 Example

### ✅ Example 1:
```
Input: s1 = "ab", s2 = "eidbaooo"
Output: true
```

---

## 📌 Constraints

- `1 ≤ s1.length, s2.length ≤ 10^4`  
- Strings contain only lowercase English letters  
- Time complexity should be **O(n)** using a **fixed-size sliding window** of size `s1.length`

---

## Table of Contents

- [Concept Files](#concept-files)
  - [Problem](/33_Permutation_in_String/01.cpp)

---
