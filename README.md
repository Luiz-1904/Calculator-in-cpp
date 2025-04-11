# 🧮 Simple C++ Calculator

This is a simple calculator project written in C++ with the goal of practicing and studying the language. It allows you to perform the four basic mathematical operations: addition, subtraction, multiplication, and division.

## ✨ Features

- Input of two real numbers (`double`)
- Four operations:
  - Addition
  - Subtraction
  - Multiplication
  - Division (with division-by-zero check)
- Option to repeat calculations based on user input
- Input validation with error handling

## 📄 Source Code

The entire code is structured in a single file and includes separate functions for:
- Each mathematical operation (`sum`, `sub`, `mult`, `div`)
- Flow control to repeat or exit (`playAgain`)
- Main calculator logic (`calculator`)
- User input interface (`interface`)
- Main entry point (`main`)

## 🔧 How to Compile and Run

### Compile

```bash
g++ -o calculator calculator.cpp
```

### Run

```bash
./calculator
```

## 🧠 Example Usage

```text
Type the first number: 10
Type the second number: 5
Choose an operation (1 = +, 2 = -, 3 = *, 4 = /): 1
10+5 = 15
Do you want to calculate again? (Y/N): y
```

## 📚 Educational Goals

This project aims to:
- Practice basic C++ syntax and structures
- Understand the use of functions, loops, conditionals, and error handling
- Improve code organization using good practices

## 🛠️ Possible Improvements

- Add support for more operations (e.g., power, square root)
- Create a main menu
- Allow full expression input
- Build a graphical user interface in the future
