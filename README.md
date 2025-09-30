# Recursion-In-Cpp

## Aim
To study and implement recursive functions in C++, demonstrating how functions can call themselves to solve complex problems by breaking them down into smaller, similar subproblems across various applications including mathematical computations and string operations.

## Software Used
- **Compiler**: GNU GCC (g++)
- **IDE**: Visual Studio Code
- **Operating System**: Windows/Linux

## Theory
Recursion is a programming technique where a function calls itself directly or indirectly to solve a problem. It involves breaking down complex problems into smaller, similar subproblems until a base case is reached.

### Key Components:
- **Base Case**: The condition that stops the recursion
- **Recursive Case**: The part where function calls itself with modified parameters
- **Stack Mechanism**: Each recursive call uses stack memory

### Advantages:
- Simplifies code for problems with recursive nature
- Elegant solution for tree and graph traversals
- Natural fit for mathematical sequences and definitions

### Disadvantages:
- Higher memory usage due to stack calls
- Risk of stack overflow for deep recursion
- Can be less efficient than iterative solutions

## Algorithms

### 1. Factorial Calculation using Recursion

**Algorithm:**
1. **Start** the program
2. **Define** recursive function `fact(int x)`:
   - **Base Case**: If `x <= 1`, return 1
   - **Recursive Case**: Return `x * fact(x-1)`
3. **In main()**:
   - Read integer input `x` from user
   - Call `fact(x)` and store result
   - Display the factorial result
4. **End** the program

**Key Characteristics:**
- Mathematical definition: n! = n × (n-1)!
- Demonstrates straightforward recursive mathematical function
- Shows decomposition of problem into smaller instances

### 2. Integer Reversal using Recursion

**Algorithm:**
1. **Start** the program
2. **Define** recursive function `revint(int a)`:
   - **Base Case**: If `a <= 0`, return (implicit)
   - **Recursive Case**: 
     - Print last digit (`a % 10`)
     - Call `revint(a/10)` to process remaining digits
3. **In main()**:
   - Read integer input `a` from user
   - Call `revint(a)` to display reversed number
4. **End** the program

**Key Characteristics:**
- Processes digits from right to left
- Uses modulus and integer division for digit extraction
- Demonstrates recursive traversal through digits

### 3. String Reversal using Recursion

**Algorithm:**
1. **Start** the program
2. **Define** recursive function `rev(char* str)`:
   - **Base Case**: If `*str` is null terminator, return
   - **Recursive Case**:
     - First call `rev(str+1)` to process next character
     - Then print current character `*str`
3. **In main()**:
   - Read string input into character array
   - Call `rev(ch)` to display reversed string
4. **End** the program

**Key Characteristics:**
- Uses pointer arithmetic for string traversal
- Demonstrates post-order recursion (process after recursive call)
- Shows recursive string manipulation

### 4. Sum of Integers using Recursion

**Algorithm:**
1. **Start** the program
2. **Define** recursive function `add(int n)`:
   - **Base Case**: If `n <= 1`, return 1
   - **Recursive Case**: Return `n + add(n-1)`
3. **In main()**:
   - Read integer input `n` from user
   - Call `add(n)` and display the sum
4. **End** the program

**Key Characteristics:**
- Calculates sum of first n natural numbers
- Similar structure to factorial but with addition
- Demonstrates cumulative recursive calculation

## Key Learning Points

- **Base Case Importance**: Crucial for preventing infinite recursion
- **Problem Decomposition**: Breaking problems into self-similar subproblems
- **Stack Usage**: Understanding how recursive calls utilize call stack
- **Multiple Applications**: Versatility across mathematical, numerical, and string operations
- **Efficiency Considerations**: When to choose recursion vs iteration

## Conclusion

This experiment successfully demonstrated the power and versatility of recursion in C++ through four distinct applications:

1. **Factorial Calculation**: Showed mathematical recursion following formal definition
2. **Integer Reversal**: Illustrated recursive digit processing and numerical manipulation
3. **String Reversal**: Demonstrated recursive pointer-based string traversal
4. **Sum Calculation**: Exhibited cumulative recursive operations

The experiments highlighted how recursion provides elegant solutions for problems that naturally exhibit self-similarity. While recursion can simplify code logic for appropriate problems, it also emphasized the importance of proper base cases and understanding of memory usage patterns. Recursion remains a fundamental technique in computer science, essential for solving complex problems in algorithms, data structures, and mathematical computations.
