## Problem 1 — Grid Transform

- The grid is read from the input file one row at a time.
- Each row is rotated by one position based on the instruction sequence provided:
  - L means the row is rotated to the left
  - R means the row is rotated to the right
- Once all rotations have been applied, the middle row of the grid (using zero-based indexing) is selected.
- The ASCII values of the characters in this middle row are summed, and this total becomes the first clue.

## Problem 2 — Multi-Pass String Processing

The input string undergoes several transformations in strict order:

1. The string is reversed completely.
2. From this reversed string, every third character is removed.
3. Each remaining character is shifted forward by two positions in the ASCII table.
4. The final transformed string is scanned, and all vowels (as defined by the standard English vowel set) are counted.

This vowel count serves as the second clue.

## Problem 3 — State Machine Simulation

- Each number from the input list is evaluated individually.
- Even numbers move forward by one state but do not reach the terminal state.
- Prime numbers skip intermediate transitions entirely and go straight to the terminal state.
- Odd composite numbers remain in their current state without progressing.

The total number of values that ultimately reach the terminal state (i.e., the prime numbers) forms the third clue.

## Final Key Construction

- The first clue is converted into its hexadecimal equivalent.
- The second clue is treated as a string value.
- This string is repeated a number of times equal to the third clue.
- Both components are then combined using a dash (-) to produce the final key.

This final key is written to final_key.txt as required.
