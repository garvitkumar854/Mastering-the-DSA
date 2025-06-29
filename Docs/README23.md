# 23. Painter's Partition Problem

## 🧠 Problem Statement

You are given an array `boards[]` of length `n`, where each element represents the **length of a board**. You have `k` painters available.

Each painter can only paint **contiguous sections** of boards, and **only one painter** can work on a board at a time. All painters paint at the **same rate**.

Your task is to determine the **minimum time** required to paint all boards if each unit of board takes `1 unit` of time.

The goal is to **minimize the maximum amount of time** any painter spends painting.

---

## 📥 Example

### ✅ Example 1:
```
Input: boards = [10, 20, 30, 40], k = 2
Output: 60
```
**Explanation:** One painter paints [10, 20, 30] and the other [40] → Max time = 60 ✅

### ❌ Example 2:
```
Input: boards = [5, 5, 5, 5], k = 2
Output: 10
```
**Explanation:** Each painter paints two boards → Max time = 10 ❌

---

## 📌 Constraints

- `1 ≤ n ≤ 10^5` (number of boards)
- `1 ≤ k ≤ n` (number of painters)
- `0 ≤ boards[i] ≤ 10^4`
- Boards must be painted in order (no splitting)
- Solve in **O(n log sum)** using Binary Search on the answer space

---

## Table of Contents

- [Concept Files](#concept-files)
  - [Problem](/23_Painter's_Partition_Problem/01.cpp)

---
