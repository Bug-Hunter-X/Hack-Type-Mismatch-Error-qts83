# Hack Type Mismatch Bug

This repository demonstrates a common type mismatch error in Hack. The `foo` function expects an integer argument, but the `bar` function passes an implicitly typed variable `$x`.  This can lead to runtime errors if `$x` is not an integer.

## Bug Report

The provided code attempts to add 1 to the variable `$x`, but because `$x` is not explicitly typed as an integer, a type error could occur if `$x` is not assigned an integer value. Hack's type system will not catch this error during compilation, leading to potential runtime issues.

## Solution

The solution involves explicitly typing the variable `$x` as an integer. This ensures type safety and prevents unexpected behavior.  The corrected code is included in `bugSolution.hh`.