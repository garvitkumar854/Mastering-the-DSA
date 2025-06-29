# 14. Buy & Sell Stock Problem

## 🧠 Problem Statement

You are given an array `prices[]` where `prices[i]` represents the **price of a stock on the i-th day**.

Your task is to **find the maximum profit** you can achieve by choosing **a single day to buy** one stock and **a different future day to sell** that stock.

If no profit can be made, return `0`.

---

## 📥 Example

### ✅ Example 1:
```
Input: prices = [7, 1, 5, 3, 6, 4]
Output: 5
```
**Explanation:** Buy at 1 and sell at 6 → Profit = 6 - 1 = 5 ✅

### ❌ Example 2:
```
Input: prices = [7, 6, 4, 3, 1]
Output: 0
```
**Explanation:** Prices keep decreasing, so no profit can be made ❌

---

## 📌 Constraints

- `1 ≤ prices.length ≤ 10^5`
- `0 ≤ prices[i] ≤ 10^4`
- Must solve in **O(n)** time with constant space

---

## Table of Contents

- [Concept Files](#concept-files)
  - [Problem](/14_Buy&Sell_Stock_Problem/01.cpp)
  
---
