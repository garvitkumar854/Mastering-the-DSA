# 32. Strings – Remove All Occurrences of a Substring

## 🧠 Problem Statement

You are given two strings:

- `s` → the original string  
- `part` → the substring to remove  

Your task is to **repeatedly remove all occurrences** of `part` from `s` until no more instances are found.

You must return the final resulting string after all removals.

Use `string::find()` and `string::erase()` or simulate it using a loop or stack.

---

## 📥 Example

### ✅ Example 1:
```
Input: s = "daabcbaabcbc", part = "abc"
Output: "dab"
```

---

## 📌 Constraints

- `1 ≤ s.length ≤ 10^4`  
- `1 ≤ part.length ≤ 1000`  
- All characters are lowercase English letters  
- Remove all `part` substrings **from left to right** until no more matches remain  

---

## Table of Contents

- [Concept Files](#concept-files)
  - [Problem](/32_Strings_RemoveAll_Occurrences/01.cpp)

---
