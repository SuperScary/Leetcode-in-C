# LeetCode Solutions in C

This repository contains my solutions to LeetCode problems implemented in C, organized in a modular and maintainable way.

## Repository Structure

```
leetcode-in-c/
├── problems/
│   ├── 0001_two_sum/
│   │   ├── README.md
│   │   ├── solution.c
│   │   └── test.c
│   └── ...
└── README.md
```

## Solution Format

Each problem solution follows this structure:

1. **README.md**: Contains the problem description, approach explanation, and complexity analysis
2. **solution.c**: The actual solution implementation with detailed comments
3. **test.c**: Test cases to verify the solution

## Naming Convention

- Folders are named as: `{problem_number}_{problem_name}`
  - Example: `0001_two_sum`, `0020_valid_parentheses`
- All problem numbers are zero-padded to 4 digits

## Code Style

- Clean, efficient, and readable code
- Comprehensive comments explaining the logic
- Proper error handling and edge cases
- Time and space complexity analysis
- Standard C headers only (no external dependencies)

## Testing

Each solution includes its own test file that can be compiled and run independently. Tests use standard C assertions and don't require any external testing framework.

## Building and Running

To compile and run a specific solution:

```bash
cd problems/problem_folder
gcc -o test test.c solution.c
./test
```

## Contributing

Feel free to submit issues and enhancement requests! 