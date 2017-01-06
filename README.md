## C++ Research

#### Preprocessor Directives

Building a C++ program is a three-step process.

* The code is run through a preprocessor
* The code is compiled
* The individual object files are linked together into a single application

#### Run in Mac OSX

* `g++ name.cpp`
* `./a.out`

The iostream header declares the input and output mechanisms provided by C++.

The table below shows some of the most common preprocessor directives.

<img src="images/preprocessor_directives.png" alt="">

#### I/O Streams

`std::cout print`
`std::endl  end line`
`\n new line`
`\r carriage return`
`\t tab`
`\\ the backslash character`
`\" quotation mark`

#### Namespaces


Namespaces address the problem of naming conflicts between different pieces of code. For example, you might be writing some code that has a function called foo(). One day, you decide to start using a third- party library, which also has a foo() function. The compiler has no way of knowing which version of foo() you are referring to within your code. You can’t change the library’s function name, and it would be a big pain to change your own.
Namespaces come to the rescue in such scenarios because you can define the context in which names are defined. To place code in a namespace, simply enclose it within a namespace block:

#### Variables

The table that follows shows the most common variable types used in C++.

<img src="images/variable_types.png" alt="">

> C++ does not provide a basic string type. However, a standard implementation of a string is provided as part of the standard library as described later in this chapter and in Chapter 13.

Variables can be converted to other types by casting them. For example, an int can be cast to a bool. C++ provides three ways of explicitly changing the type of a variable. The first method is a holdover from C, but is still the most commonly used. The second method seems more natural at first but is rarely seen. The third method is the most verbose, but often considered the cleanest.

* `bool someBool = (bool)someInt; // method 1`
* `bool someBool = bool(someInt); // method 2`
* `bool someBool = static_cast<bool>(someInt); // method 3`


#### Operators

The table below shows the most common operators used in C++ and sample code that makes use of them.

<img src="images/operators.png" alt="">

#### Functions

For programs of any significant size, placing all the code inside of main() is unmanageable. To make programs easy to understand, you need to break up, or decompose, code into concise functions.

In C++, you first declare a function to make it available for other code to use. If the function is used inside a particular file of code, you generally declare and define the function in the source file. If the function is for use by other modules or files, you generally put the declaration in a header file and the definition in a source file.

> Function declarations are often called “function prototypes” or “signatures” to emphasize that they represent how the function can be accessed, but not the code behind it.

> In C++, unlike C, a function that takes no parameters just has an empty parameter list. It is not necessary to use “void” to indicate that no parameters are taken. However, you should still use “void” to indicate when no value is returned.

A function declaration is shown below. This example has a return type of void, indicating that the func- tion does not provide a result to the caller. The caller must provide two arguments for the function to work with — an integer and a character.

`void myFunction(int i, char c);`
