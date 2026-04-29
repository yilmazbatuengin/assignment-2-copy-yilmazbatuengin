#!/usr/bin/env bash
set -euo pipefail
clang -std=c11 -Wall -Wextra -Werror scores.c -o scores
# example run (student can compare)
echo -e "72\n73\n33\n" | ./scores
