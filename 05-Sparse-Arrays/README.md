# HackerRank 3rd Semester Portfolio
https://www.hackerrank.com/profile/sirishak2107
## Student Information

- Name: Sirisha k
- Roll Number: R25EJ147
- Semester: 3rd Semester
- Language: C++20
- Platform: HackerRank

## About This Repository

This repository contains my solutions to selected HackerRank problems completed as part of my 3rd semester programming portfolio. The solutions are written in C++20 and were tested and submitted successfully on HackerRank.

## Problems Solved

| No. | Problem | Topic | Status |
|---|---|---|---|
| 1 | Diagonal Difference | Arrays | ✅ Solved |
| 2 | Dynamic Array | Data Structures | ✅ Solved |
| 3 | Time Conversion | Strings | ✅ Solved |
| 4 | Compare the Triplets | Arrays | ✅ Solved |
| 5 | Sparse Arrays | Strings / Arrays | ✅ Solved |

---

## 1. Diagonal Difference

### Approach

The solution calculates the sum of the two diagonals of the square matrix. The primary diagonal uses elements where the row and column indices are the same, while the secondary diagonal uses the opposite column position. The absolute difference between the two sums is returned.

### Complexity

- Time: O(n)
- Space: O(1)

---

## 2. Dynamic Array

### Approach

The solution maintains a collection of dynamic sequences. For each query, the required sequence is determined using the XOR operation between `x` and `lastAnswer`, followed by the modulo operation with `n`. Type 1 queries append an element, while Type 2 queries retrieve an element and update `lastAnswer`.

### Complexity

- Time: O(q) for processing the queries, excluding vector access
- Space: O(n + q)

---

## 3. Time Conversion

### Approach

The solution converts a 12-hour time format into a 24-hour format. It checks whether the time is AM or PM and handles the special cases of 12 AM and 12 PM separately.

### Complexity

- Time: O(1)
- Space: O(1)

---

## 4. Compare the Triplets

### Approach

The corresponding scores of Alice and Bob are compared one by one. Alice's score is increased when her value is greater, and Bob's score is increased when his value is greater. The final scores are returned in a vector.

### Complexity

- Time: O(1)
- Space: O(1)

---

## 5. Sparse Arrays

### Approach

For every query string, the solution checks all strings in the given string list and counts how many times the query occurs. Each count is stored in the result vector.

### Complexity

- Time: O(n × q)
- Space: O(q)

---

## Skills Practiced

- C++ programming
- Arrays and vectors
- Strings
- Loops and conditional statements
- Bitwise XOR
- Functions
- Time conversion
- Basic algorithmic problem solving
- Git and GitHub
- Version control and commits

## Repository Structure

```text
HackerRank-3rdSem-Portfolio/
│
├── 01-Diagonal-Difference/
│   └── diagonal_difference.cpp
│
├── 02-Dynamic-Array/
│   └── dynamic_array.cpp
│
├── 03-Time-Conversion/
│   └── time_conversion.cpp
│
├── 04-Compare-the-Triplets/
│   └── compare_triplets.cpp
│
├── 05-Sparse-Arrays/
│   └── sparse_arrays.cpp
│
├── .gitignore
└── README.md
