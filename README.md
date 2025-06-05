# 🧮 Simple Interactive Calculator (C Program)

This is a basic interactive calculator written in C. It allows users to input equations without spaces (e.g., `3+4`), evaluates the result, and gives the option to continue calculating with that result or start fresh with a new equation.

---

## ✅ Features

- Supports basic arithmetic operations:  
  ➕ Addition (`+`)  
  ➖ Subtraction (`-`)  
  ✖️ Multiplication (`*`)  
  ➗ Division (`/`)  
  ⬆️ Exponentiation (`^`, via repeated multiplication)

- Interactive session for continued calculations
- Error handling for invalid operators and division by zero
- Clean, user-friendly prompts

---

## 🧑‍💻 How to Use

### Input Format

- Initial input: `<number><operator><number>` (e.g., `6/2`, `3^4`)
- Continued operations: `<operator><number>` (e.g., `+5`, `*2`)
- No spaces allowed in input

### Example Session

- Enter an equation (no spaces): 8/2
- Result: 4.000000
- Would you like to continue with this result? 1 for yes, 0 for no
- 1

- Enter what you want to do with the result: Ex. *5
- *3
- Result: 12.000000
- Continue? 1 for yes, 0 for no
- 0

- Would you like to solve a different equation? 1 for yes, 0 for no
- 0
- Have a good day! Happy mathing

## ⚙️ Compilation Instructions

1. Save the file as `calculator.c`
2. Open your terminal and run:

```bash
gcc -o calculator calculator.c
./calculator
⚠️ Limitations
Exponentiation only works with non-negative integers

Input must be formatted exactly (no whitespace)

No support for advanced math functions or parentheses

📁 File Structure
bash
Copy
Edit
calculator.c        # Main source file
README.md           # Program overview and usage guide
