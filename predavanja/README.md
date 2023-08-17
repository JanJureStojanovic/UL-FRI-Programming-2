# Programming 2 lectures [2022/23]

## 1. Control constructs

### 1.1 Writing, compiling and running a C program
Running and compiling a C program involves several steps that transform your human-readable source code into machine-executable code. Here's a breakdown of the process:

1. Writing the Source Code:
You start by writing your C code using a text editor or integrated development environment (IDE). The source code is the human-readable representation of your program's logic.

2. Saving the Source Code:
Save your C code with a .c file extension, such as my_program.c. This file contains the code you've written in C.

3. Compiling the Code:
Compiling is the process of converting your high-level source code into low-level machine code that a computer can understand and execute. To compile a C program, you need a C compiler. One of the most popular compilers is the GNU Compiler Collection (GCC).

To compile your program using GCC, open a terminal and navigate to the directory containing your .c file. Then, run the following command:

```bash
gcc -o my_program.c my_program
```

This command tells the compiler to compile my_program.c and generate an executable named my_program.

4. Creating the Executable:
Once the compilation process is successful, the compiler generates an executable file (e.g., my_program) that contains the machine code representing your program.

5. Running the Executable:
To run the compiled program, simply type its name in the terminal:

```bash
./my_program
```

This command executes the compiled machine code and produces the output of your program, if any.

Compilers typically process the source code in a top-to-bottom manner, starting from the beginning of the file and working their way down. The compilation process involves several stages:

1. Preprocessing: The preprocessor handles directives like #include and #define. It includes header files and replaces macros with their values.

2. Compilation: The compiler translates your C code into assembly code.

3. Assembly: The assembly code is translated into machine code by the assembler.

4. Linking: If your program uses external libraries or functions, the linker combines your code with the relevant libraries to create the final executable.

Throughout these steps, the compiler and other tools ensure that your code is correct and can be executed by the target machine's architecture.

### 1.2 Conditional statements
Conditional statements are used to execute different blocks of code based on whether a condition is true or false. In C, the main conditional statement is the if statement. Here's the basic syntax:

```c
if (condition) {
    // Code to execute if condition is true
} else {
    // Code to execute if condition is false
}
```

You can also use the else if clause to handle multiple conditions:

```c
if (condition1) {
    // Code for condition1
} else if (condition2) {
    // Code for condition2
} else {
    // Code if none of the conditions are true
}
```

### 1.3 Loops:
Loops are used to repeat a block of code multiple times. There are three types of loops in C: for, while, and do-while.

for loop: Used when you know the number of iterations in advance.

```c
for (initialization; condition; increment/decrement) {
    // Code to repeat
}
```

while loop: Continues to execute as long as a condition remains true.

```c
while (condition) {
    // Code to repeat
}
```

do-while loop: Similar to the while loop, but the condition is checked after the loop body is executed, ensuring the loop body runs at least once.

```c
do {
    // Code to repeat
} while (condition);
```
    
### 1.4 Branching:
Branching constructs allow you to change the flow of execution based on specific cases. In C, you can achieve branching using the switch statement.

```c
switch (expression) {
    case value1:
        // Code for value1
        break;
    case value2:
        // Code for value2
        break;
    // ... more cases ...
    default:
        // Code if no case matches
}
```

Remember that in each control construct, the curly braces {} are used to define the scope of the code that should be executed as a result of the condition being met.



## 2. Functions
A function is a self-contained block of code that performs a specific task. Functions in C are essential for modular and organized programming. They allow you to break down your code into smaller, manageable pieces that can be reused and tested independently.
Here's how you declare and define a function in C:

```c
return_type function_name(parameters) {
    // Function body
    // Code that performs the task
    return return_value;
}
```

 - return_type: The data type of the value that the function will return. It can be int, float, char, void (if the function doesn't return a value), or other data types.
 - function_name: The name you choose for your function.
 - parameters: Any values that the function requires to perform its task. If the function doesn't need any parameters, you can use an empty set of parentheses ().
 - return_value: The value that the function returns to the caller. If the function's return type is void, you don't need a return statement.

1. Function Declaration and Definition:
 - Declaration: Tells the compiler about the function's name, return type, and parameters. It doesn't contain the actual code of the function. Declarations are usually placed in header files.
 - Definition: Provides the actual implementation of the function, including the code that performs the task.

2. Calling a Function:
To use a function, you call it by its name and pass the required arguments:

```c
return_value = function_name(arguments);
```

3. Function Prototypes:
A function prototype is a declaration of the function's name, return type, and parameters. It helps the compiler understand how to use the function before its actual definition. Prototypes are typically placed at the beginning of your code or in header files.

Here's a simple example of a function that calculates the sum of two integers:

```c
#include <stdio.h>

// Function prototype
int calculateSum(int a, int b);

int main() {
    int num1 = 5, num2 = 7, sum;

    // Calling the function
    sum = calculateSum(num1, num2);

    printf("Sum: %d\n", sum);

    return 0;
}

// Function definition
int calculateSum(int a, int b) {
    return a + b;
}
```

4. Benefits of Functions:
 - Modularity: Functions help break down complex tasks into manageable parts.
 - Reusability: Once a function is defined, it can be reused throughout your program.
 - Readability: Well-named functions improve code readability and organization.
 - Testing: Isolating functionality in functions makes testing and debugging easier.

## 3. Recursion:

Recursion is a programming technique in which a function calls itself in order to solve a problem. Recursive functions have two main components:

### 3.1 Base Case: 
A condition that determines when the recursion should stop. It's the simplest case that can be solved directly without further recursive calls.

### 3.2 Recursive Case: 
The part of the function that calls itself with modified arguments, moving the problem towards the base case.

Recursion is often used to solve problems that can be broken down into smaller, similar subproblems. It's important to make sure that each recursive call brings you closer to the base case; otherwise, the recursion won't terminate.

Example: Factorial Using Recursion: Calculating the factorial of a non-negative integer n can be defined recursively as follows:

```c
n! = n * (n-1)!
```

Here's how you could implement a recursive factorial function in C:

```c
#include <stdio.h>

int factorial(int n) {
    // Base case
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}
```

In this example, the factorial function calculates the factorial of a given number n using recursion. The base case is when n is 0 or 1, in which case the function returns 1. Otherwise, the function makes a recursive call by calculating (n - 1)! and multiplying it by n.

### 3.3 Recursion vs. Iteration:
Recursion is a powerful technique, but it can also lead to increased memory usage and potential stack overflow if not implemented carefully. In many cases, problems that can be solved recursively can also be solved using iterative approaches (loops). Both techniques have their strengths, and the choice depends on the problem and your coding style.

When using recursion, it's important to ensure that the base case is reached and that each recursive call makes progress toward the base case. Understanding the call stack and the order of function calls is crucial for effectively implementing recursive algorithms.

### 3.4 Memoization
Memoization is a technique used to optimize recursive algorithms by storing the results of expensive function calls and returning the cached result when the same inputs occur again. This technique helps avoid redundant calculations and improves the overall efficiency of the algorithm.

Memoization is particularly effective for recursive algorithms that exhibit overlapping subproblems, where the same subproblem is solved multiple times in a recursive chain. One classic example of such a problem is calculating Fibonacci numbers using recursion.

Here's how memoization works:

1. Create a Cache: When using memoization, you maintain a data structure (often an array or a hash map) to store the results of function calls based on their input parameters.

2. Before Recursive Call: Before making a recursive call, check if the result for the given inputs is already present in the cache.

3. If Cached: If the result is found in the cache, return it immediately, skipping the expensive recursive call.

4. If Not Cached: If the result is not cached, proceed with the recursive call and store the result in the cache before returning it.

By caching the results of function calls, you avoid recalculating the same values multiple times, which can lead to significant performance improvements, especially for problems with exponential time complexity.

Example: Fibonacci Sequence with Memoization: Let's use the Fibonacci sequence as an example. The Fibonacci sequence is defined as follows: F(0) = 0, F(1) = 1, and F(n) = F(n-1) + F(n-2) for n > 1.

Here's how you can implement a memoized version of the Fibonacci function in C:

```c
#include <stdio.h>

#define MAX_N 100
int fib_cache[MAX_N];

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    // Check if result is already cached
    if (fib_cache[n] != -1) {
        return fib_cache[n];
    }

    // Otherwise, calculate and cache the result
    fib_cache[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return fib_cache[n];
}

int main() {
    int n = 10;
    
    // Initialize cache
    for (int i = 0; i < MAX_N; i++) {
        fib_cache[i] = -1;
    }

    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));

    return 0;
}
```

In this example, fib_cache is an array that stores the cached results of Fibonacci calculations. The -1 value indicates that a result is not yet cached. The fibonacci function first checks the cache before making a recursive call. If the result is found in the cache, it's returned immediately. Otherwise, the result is calculated, cached, and returned.

Memoization dramatically reduces the number of redundant calculations and makes the Fibonacci algorithm much more efficient. This technique can be applied to a wide range of problems to optimize recursive algorithms.

## 4. Structures
Structures, also known as "structs," are a fundamental data type in C that allow you to group together variables of different types under a single name. Structs provide a way to create user-defined data types that can represent complex objects.

### 4.1 Defining and Using Structures:
Here's how you define a structure in C:

```c
struct Student {
    char name[50];
    int age;
    float grade;
};
```

In this example, a Student struct is defined, which has three members: name, age, and grade. The members are variables of different data types.
You can then create variables of this struct type:

```c
struct Student student1;  // Declare a variable of type Student
```

And you can access and modify the struct members using the dot . operator:

```c
strcpy(student1.name, "John");
student1.age = 20;
student1.grade = 85.5;
```

### 4.2 Initializing Structures:
You can initialize struct variables when they're declared:

```
struct Student student2 = {"Alice", 22, 92.0};  // Initialize using values
```
### 4.3 Structures and Functions:
Structures can also be passed to functions. Here's an example of a function that takes a struct as a parameter:

```c
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

void displayStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Grade: %.2f\n", s.grade);
}

int main() {
    struct Student student1 = {"John", 20, 85.5};
    displayStudent(student1);

    return 0;
}
```

### 4.4 Structs and Pointers:
Structs can also be used with pointers. Here's an example of dynamically allocating memory for a struct and accessing its members using a pointer:

```c
#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point *pointPtr;

    pointPtr = (struct Point *)malloc(sizeof(struct Point));
    if (pointPtr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    pointPtr->x = 5;
    pointPtr->y = 10;

    printf("Coordinates: (%d, %d)\n", pointPtr->x, pointPtr->y);

    free(pointPtr);

    return 0;
}
```

### 4.5 Typedef:
You can use the typedef keyword to create a new name (also known as an alias) for a struct type. This allows you to use the new name without having to prefix it with struct each time you declare a variable of that type.

Here's how you can use typedef to create an alias for a struct:

```c
typedef struct _Vozlisce {
    int podatek;
    struct _Vozlisce* n;
    struct _Vozlisce* nn;
} Vozlisce;
```

In this example, you're creating a struct _Vozlisce with three members: an integer podatek and two pointers to _Vozlisce (named n and nn). Then, you're creating an alias Vozlisce for the struct _Vozlisce. This allows you to declare variables of type Vozlisce without having to use struct before it.

Structures in C are powerful for organizing and representing data, creating more complex data types, and building more organized and modular programs. They are often used for representing real-world entities, such as students, employees, coordinates, and more.














