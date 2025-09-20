# 🧮 Simple C++ Calculator

This is a **basic calculator program** written in C++.
It allows the user to perform simple arithmetic operations: **addition, subtraction, multiplication, and division**.

---

## 🚀 Features

* Supports **4 operations**: `+`, `-`, `*`, `/`
* Takes **two numbers** as input
* Displays the result clearly
* Handles invalid operator input with an error message

---

## 📂 Code Overview

The program:

1. Prompts the user to select an operation (`+`, `-`, `*`, `/`).
2. Asks for two numbers.
3. Uses a `switch` statement to perform the correct calculation.
4. Prints the result or an error message if the input is invalid.

---

## 🖥️ Example Run

```
*******CALCULATOR*********
Enter either (+, -, * or /)?: *
Enter number #1: 5
Enter number #2: 3
result: 15
****************************
```

---

## ⚡ How to Compile and Run

### Using g++

1. Open a terminal and navigate to the project folder.
2. Compile the program:

   ```bash
   g++ calculator.cpp -o calculator
   ```
3. Run the program:

   ```bash
   ./calculator
   ```

### Using an IDE

* Simply create a new C++ project, paste the code, and click **Run**.

---

## 🔮 Possible Improvements

* Handle **division by zero** errors.
* Allow **multiple calculations** without restarting the program.
* Add support for **more operations** (e.g., modulus, power).
* Create a **menu-based interface**.

---
