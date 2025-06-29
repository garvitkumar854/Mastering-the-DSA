# 31. Strings – Valid Palindrome

## 🧠 Problem Statement

You are given a string `s` which may contain:
- Uppercase and lowercase letters
- Digits
- Spaces and punctuation marks

Your task is to determine if the string is a **valid palindrome**, by:
- Ignoring **non-alphanumeric** characters (like punctuation, spaces, etc.)
- Comparing characters **case-insensitively**

The solution should use a **two-pointer approach**, where:
- You manually check for **alphanumeric** using ASCII logic or helper function.
- You convert characters to lowercase using `tolower()` before comparison.

Avoid using extra space for cleaned strings.

---

## 📥 Example

### ✅ Example 1:
```
Input: s = "A man, a plan, a canal: Panama"
Output: true
```
**Explanation:** After filtering and ignoring case → "amanaplanacanalpanama" ✅

---

## 📌 Constraints

- `1 ≤ s.length ≤ 2 * 10^5`
- Input contains ASCII characters (letters, numbers, symbols, etc.)
- Solve in **O(n)** time and **O(1)** space (excluding input)

---

## Table of Contents

- [Concept Files](#concept-files)
  - [Problem](/31_Strings_Valid_Palindrome/01.cpp)

---
