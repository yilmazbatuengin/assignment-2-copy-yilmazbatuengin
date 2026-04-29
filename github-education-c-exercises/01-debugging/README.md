# Exercise 01 — Debugging (Fix the Bugs)

You have 6 C files that are **intentionally buggy**.
Your job: make each program compile and run correctly.

## Goal
For each file:
1. Make it compile: `clang -std=c11 -Wall -Wextra -Werror file.c -o file`
2. Run it and confirm it prints what it should.

## Files
- `buggy0.c` and `buggy1.c`: should print **hello, world**
- `buggy2.c`: asks for a name and prints **hello, NAME**
- `buggy3.c`: should print 4 lines of `#`
- `buggy4.c`: should print `i is ...` and `#` for 4 iterations
- `buggy5.c`: asks for height and prints that many `#` lines

## Tips
- Missing/incorrect `#include`
- Missing semicolons
- Wrong format specifiers (`%s`, `%i`, etc.)
- Off-by-one in loops (`<=` vs `<`)
- Missing function prototypes
