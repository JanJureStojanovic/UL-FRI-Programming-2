#Programming 2 lectures [2022/23]

##Control constructs

###Writing, compiling and running a C program
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


###1. Conditional statements
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

###2. Loops:
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
    
###3. Branching:
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

##Functions
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
Modularity: Functions help break down complex tasks into manageable parts.
Reusability: Once a function is defined, it can be reused throughout your program.
Readability: Well-named functions improve code readability and organization.
Testing: Isolating functionality in functions makes testing and debugging easier.




