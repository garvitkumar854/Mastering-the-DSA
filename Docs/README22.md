# 22. Book Allocation

## 🧠 Problem Statement

You are given an array `books[]` where each element represents the **number of pages in a book**. There are `n` books and `m` students.

Your task is to **allocate books to `m` students** such that:
- Each student gets **at least one book**
- Each book is assigned to **exactly one student**
- Books must be allocated **in contiguous order**

The goal is to **minimize the maximum number of pages** assigned to any student.

You must determine the **minimum possible value** of the maximum pages any student has to read after optimal allocation.

---

## 📥 Example

### ✅ Example 1:
```
Input: books = [10, 20, 30, 40], m = 2
Output: 60
```
**Explanation:** Allocation: [10, 20, 30] and [40] → max pages = 60 ✅

### ❌ Example 2:
```
Input: books = [10, 20, 30, 40], m = 4
Output: 40
```
**Explanation:** Each student gets one book → max = 40 ❌

---

## 📌 Constraints

- `1 ≤ n ≤ 10^5` (number of books)
- `1 ≤ m ≤ n` (number of students)
- `0 ≤ books[i] ≤ 10^4`
- Solve in **O(n log sum)** using Binary Search on the answer space

---

## Table of Contents

- [Concept Files](#concept-files)
  - [Problem](/22_Book_Allocation/01.cpp)

---

