# 🚀 C Programming Journey: Zero to Hero & Memory Mastery

Welcome to my repository chronicling my intensive journey through low-level C programming! This repository contains all my code exercises, algorithmic problem-solving tasks, and low-level memory experiments.

It reflects a structured, step-by-step roadmap designed to build rock-solid foundations in systems programming before transitioning into higher-level engineering with Python.

---

## 🛠️ Environment & Tooling

* **Language:** C (C99 standard)
* **Compiler:** GCC (MinGW-w64)
* **IDE/Editor:** Visual Studio Code
* **Terminal Environment:** Windows PowerShell
* **Version Control:** Git & GitHub

---

## 📚 Curriculum Roadmap & Milestone Log

### 🧱 Week 1 — Fundamentals & Basics
* **Day 1 (Setup & Hello World):** Environment configuration and baseline compilation (`hello.c`).
* **Day 2 (Syntax & Tokens):** Console output, format specifiers, multi-line printing.
* **Day 3 (Variables & Data Types):** Data storage for integers, chars, and subject marks.
* **Day 4 (Basic Operators):** Arithmetic evaluation, sum, and average calculations.
* **Day 5 (Arithmetic Logic):** Building a basic currency converter (INR to USD).
* **Day 6 (Revision):** Code refactoring and variable lifecycle testing.

### 🔀 Week 2 — Control Flow & Decision Logic
* **Day 7 (If-Else Statements):** Conditional branching (Positive, Negative, Zero checkers).
* **Day 8 (Logical Operators):** Boolean logic and Leap Year verification algorithms.
* **Day 9 (Switch Statements):** Menu-driven arithmetic calculator using `switch-case`.
* **Day 10 (For Loops):** Iterative loops and multiplication table generators.
* **Day 11 (While Loops):** Condition-driven iteration (Even number filtering 1-50).
* **Day 12 (Loop Logic):** Factorial calculations and state accumulation.
* **Day 13 (Pattern Printing):** Nested loop execution for star pyramid renderings.

### 🧩 Week 3 — Modular Functions & Core Arrays
* **Day 14 (Functions Basics):** Parameter passing and functional decomposition.
* **Day 15 (Scope & Parameters):** Variable pass-by-value and variable swap logic.
* **Day 16 (Recursion):** Mathematical stack recursion for Fibonacci series computation.
* **Day 17 (Revision):** Problem-solving practice focusing on functional modularity.
* **Day 18 (1D Arrays):** Contiguous memory collection and array Max/Min algorithms.
* **Day 19 (Array Manipulation):** In-place two-pointer array reversal algorithms.
* **Day 20 (2D Arrays / Matrices):** Nested grid processing and 2x2 Matrix Addition.

### 🧵 Week 4 — Strings, Pointers & Memory Management
* **Day 21 (Linear Search):** O(N) array traversal and index position tracking.
* **Day 22 (String Basics):** Null-terminated (`'\0'`) character arrays, safe buffer input using `fgets()`, and custom string length evaluation.
* **Day 23 (String Palindrome):** Two-pointer string reversal and string matching algorithms (`palindrome.c`).
* **Day 24 (Pointers Intro):** Inspecting raw memory locations in RAM using the Address-Of operator (`&`) and hexadecimal format specifiers (`%p`) (`pointers_intro.c`).
* **Day 25 (Pointers - Values & Mutation):** Pointer variable declaration (`int *ptr`), value dereferencing (`*ptr`), and in-place memory mutation (`pointers_value.c`).
* **Day 26 (Pointers & Arrays):** Pointer arithmetic (`ptr++`), base address equivalence (`int *ptr = array`), and contiguous memory traversal (`pointers_array.c`).

---

## ⚡ Key Engineering Lessons & Real Debugging Wins

During this journey, I didn't just learn syntax—I tackled real C runtime behaviors and low-level memory bugs:

1. **Buffer Overflows & Input Sanitization (`fgets` vs `scanf`):**
   * *Problem:* Standard `scanf("%s")` leaves dangling newline bytes (`'\n'`) in the input buffer, breaking subsequent string reads or comparison logic.
   * *Solution:* Standardized on `fgets(str, sizeof(str), stdin);` coupled with `str[strcspn(str, "\n")] = '\0';` to safely strip trailing newline bytes.

2. **Pointer Format Specifiers & Address Resolution:**
   * *Problem:* Accidentally printing dereferenced pointer values (`*ptr`) using hexadecimal `%p` resulted in base-16 outputs (e.g., `10` rendered as `0x000A`). Furthermore, printing `&ptr` returned the memory address of the pointer variable itself rather than the target array box.
   * *Solution:* Disentangled the notation: `%d` with `*ptr` extracts the value sitting inside the memory slot, while `%p` with `ptr` resolves the physical address of the targeted element.

3. **Contiguous Memory Spacing via Pointer Arithmetic:**
   * *Insight:* Verified that incrementing an integer pointer (`ptr++`) automatically shifts the memory address by **4 bytes** (the standard size of an `int` in 64-bit systems), proving how C handles type-scaled pointer arithmetic under the hood.

---

## 🏧 Capstone Project Highlight

* **Day 27 — ATM Machine Simulator CLI (`atm_machine.c`):**
  * Built a terminal-based banking application featuring interactive menu loops (`while`), formatted ASCII card interfaces (`%-34s`), deposit/withdrawal validation, and session handling.
  * *Dedicated Repository:* [ATM-Machine-C]

---

## 🏃 How to Run the Code Locally

1. **Clone the repository:**
   ```bash
   git clone [https://github.com/mohiljoshi24/C_Coding_Journey.git](https://github.com/mohiljoshi24/C_Coding_Journey.git)
   cd C_Coding_Journey