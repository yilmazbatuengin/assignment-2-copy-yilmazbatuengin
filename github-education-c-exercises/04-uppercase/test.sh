#!/usr/bin/env bash
set -euo pipefail
clang -std=c11 -Wall -Wextra -Werror uppercase.c -o uppercase
echo "hi there!" | ./uppercase
