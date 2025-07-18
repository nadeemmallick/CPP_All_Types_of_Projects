# Understanding First C++ Program

The "Hello World" program is the first step towards learning any programming language and is also one of the most straightforward programs you will learn. It is the basic program that demonstrates the working of the coding process. All you have to do is display the message "Hello World" on the output screen.

---

## C++ Hello World Program

This program helps you:

* Learn the **basic structure** of a C++ program
* Understand **syntax** and **components**

```cpp
// Necessary header files for input/output functions
#include <iostream>
using namespace std;

// main() function: where execution begins
int main() {
  
    // This statement prints "Hello World"
    cout << "Hello World";

    return 0;
}
```

---

## Comments in C++

Comments are **non-executable lines** in the program. They are used to **explain code** and are **ignored by the compiler**.

The comment are used to display additional information about the program that do not contain any programming logicand are not the part of executable program and are purely used for documentation and provide explanation or notes about the code. When a comment is encountered by a compiler, the compiler simply skips that line of code.

```cpp
// C++ program to print "Hello World"
```

---

## Preprocessor Directives

Preprocessor directives begin with `#` and are processed **before compilation**.

The #include is a preprocessor directive that tells the compiler to include the content of a file in the source code. For example, #include<iostream> tells the compiler to include the input-output library which contains all C++'s input/output library functions.

```cpp
#include <iostream>  // includes the input/output library
```

It tells the compiler to include the standard I/O stream.

---

## Header Files

Header files contain **declarations** of functions, macros, and types.

* Without `.h` extension (modern C++)

In C++ language header file is a file that contains features like functions, data types, macros, etc that can be used by any other C program by including that particular header file using “#include” preprocessor. Header files generally ends with the .h extension although in modern C++ many header files do not have the .h extension


```cpp
#include <iostream>
```

* With `.h` extension (older C-style)

```cpp
#include <string.h>
```

---

## Namespace

Namespaces help avoid **naming conflicts**.

In C++ namespaces are used to group logically related functions, variables and other entities to avoid name conflicts. is used to import the entity of the std namespace into the current namespace of the program. It is basically the space where all the inbuilt features of C++ are declared. For example, std::court.


```cpp
using namespace std;
```

Instead of writing:

```cpp
std::cout << "Hello";
```

You can just write:

```cpp
cout << "Hello";
```

---

## Main Function

The `main()` function is the **entry point** of any C++ program.

The main() function is the entry point of every C++ program when the program is executed the code written in the main functions is executed first. The opening braces '{' indicates the beginning of the main function and the closing braces '}' indicates the ending of the main function.

```cpp
int main() {
    // program code
}
```

---

## Return Statement

The `return` statement is used to:

The return statement is used to return a value from a function and indicates the finishing of a function. Here, it is used to sent the signal of successful execution of the main function.

* Exit the function
* Return a value to the OS

```cpp
return 0;
```

It means the program ended successfully.

---

## Code Readability

* Always use **indentation**
* Write **comments** to explain code
* Format code neatly

---

### Final Output of Program

```
Hello World
```

---

**Summary:**

* `#include`: Preprocessor
* `using namespace std`: Avoid std:: repetition
* `main()`: Starting point
* `cout`: Output statement
* `return 0`: End of program
