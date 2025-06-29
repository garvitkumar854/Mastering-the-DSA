# 9. Maximum Subarray Sum

You are given an array of integers which may include positive, negative, or zero values.  
Your task is to find the **contiguous subarray** (a group of elements that are next to each other) which has the **maximum sum**, and return that sum.

---

### 🧠 What is a Subarray?

A **subarray** is a slice of the original array formed by taking **consecutive elements**.

📌 Examples from `[1, 2, 3, 4]`:
- ✅ `[1, 2]`
- ✅ `[3]`
- ✅ `[2, 3, 4]`
- ❌ `[1, 3]` (Not valid since they're not consecutive)

---

### 🔍 Problem Insight

The core idea is to **track the sum** of elements and update the maximum whenever a better subarray is found.  
This is most efficiently done using **Kadane’s Algorithm** which works in linear time **O(n)**.

---

### 🔒 Constraints

- Array size `n ≥ 1`
- Elements can be **positive, negative, or zero**
- Optimal solution should run in **O(n)** time and **O(1)** space

---

## 📘 Table of Contents

### 📚 Concept Files

- [💡 Problem - Kadane's Algorithm](/09_Maximum_SubArray_Sum/01.cpp)

---

> 🚀 This problem is a **classic for interviews** and teaches a strong base for Dynamic Programming.
