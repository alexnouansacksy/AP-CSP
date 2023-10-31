<h1>Handbook on Programming in C and sometimes C++  </h1>

**AP Computer Science Principles 2023-2024**

Alex Nouansacksy

<!-- This is a comment (which will not be displayed in the live file);
replace all "???" with your own text. -->

Hello, today we will be learning how to program in C! While C is a very useful language,
there are some limitations. For example, there are no Strings in C, and instead there 
are only Character arrays. Because of this, for some of our notes we will be using
features from C++.



___





<h1>Table of Contents</h1>

- [1. Compiling and Running](#1-compiling-and-running)
- [2. Data Types](#2-data-types)
- [3. Console I/O](#3-console-io)
- [4. Arithmetic Operations](#4-arithmetic-operations)
- [5. Assignment Operations](#5-assignment-operations)
- [6. Comments](#6-comments)
- [7. Decision Structures](#7-decision-structures)
- [8. Conditional Operators](#8-conditional-operators)
- [9. Logic Operators](#9-logic-operators)
- [10. Advanced Decision Structures](#10-advanced-decision-structures)
- [11. String Methods](#11-string-methods)
- [12. Random Generation](#12-random-generation)
- [13. Looping Structures](#13-looping-structures)
- [14. Functions/Methods](#14-functionsmethods)
- [15. Elementary Data Structures](#15-elementary-data-structures)
  - [15.1 Arrays/Lists](#151-arrayslists)
  - [15.2 Matrices](#152-matrices)
- [References](#references)

<!-- 
- [16. Major Keywords](#16-major-keywords)
- [17. Error Handling](#17-error-handling)
- [18. Working with Files](#18-working-with-files)
- [19. Major Language Features](#19-major-language-features)
  - [19.1 Classes](#191-classes)
  - [19.2 Inheritance](#192-inheritance)
  - [19.3 Generic Typing (Templates)](#193-generic-typing-templates)
  - [19.4 Pointers](#194-pointers)
- [20. Importing Local Libraries](#20-importing-local-libraries)
- [21. Working with Time](#21-working-with-time)
- [22. Importing Libaries from Package managers](#22-importing-libaries-from-package-managers)
- [23. Bitwise Operators](#23-bitwise-operators)
- [24. Common Data Structures](#24-common-data-structures)
- [25. Advanced Language Features](#25-advanced-language-features)
-->




___





# 1. Compiling and Running

Alright so first you want to install GCC which you can do [here](https://www.youtube.com/watch?v=k6juv3mIr9o&t=83s&ab_channel=NickWalton) and install desired GCC version.

After that you go install Visual Studio code.

After that you go to the extensions tab in your VS code and install "C/C++", "C/C++ Extension Pack", and "Code Runner."

After that you go to your Code Runner settings and turn on Run in Terminal and Save on Run.

After that you go create your "name".c program and change "name" to whatever you want, and then hit the run button.

Now your code compiles and runs!



___





# 2. Data Types
```cpp
// Integers represent whole numbers.
int number = 0;
printf("%d", number);
// Doubles represent decimal numbers.
double dbl = 1.5;
printf("lf", dbl);
// Chars represent any specific character, from 0 to 255.
char a = 'a';
printf("%c", a);


// Strings (C++) represent a set of words
// for strings you can use a char array, or you can just change your program to C++;
#include <stdio.h>
#include <iostream>
using namespace std; // make sure you have these three at the top of your program.

string abc = "I love to program in C and sometimes C++!";
printf("%s", abc);

// Booleans: 
#include <stdbool.h> // just make sure you have this at the top of your program.
bool isTrue = true;

if (isTrue) printf("That is true!");
else printf("That is not true!");

```





# 3. Console I/O

???





___





# 4. Arithmetic Operations

???





___





# 5. Assignment Operations

???





___





# 6. Comments

???





___





# 7. Decision Structures

???





___





# 8. Conditional Operators

???





___





# 9. Logic Operators

???





___





# 10. Advanced Decision Structures

???





___





# 11. String Methods

???





___





# 12. Random Generation

???





___





# 13. Looping Structures

???





___





# 14. Functions/Methods

???





___





# 15. Elementary Data Structures

???





## 15.1 Arrays/Lists

???






## 15.2 Matrices

???





___





<!-- 
EVERYTHING BELOW IS OPTIONAL; 
UNCOMMENT BY REMOVING THE ARROW TAGS SURROUNDING
(i.e., delete the "< !--" and "-- >" tags)

CHANGE THE SECTION NUMBERS AS DESIRED
-->

<!-- # 16. Major Keywords

???





___ -->





<!-- # 17. Error Handling

???





___ -->





<!-- # 18. Working with Files

???





___ -->





<!-- # 19. Major Language Features

???







## 19.1 Classes

???





## 19.2 Inheritance

???





## 19.3 Generic Typing (Templates)

???





## 19.4 Pointers

???





___ -->





<!-- # 20. Importing Local Libraries

???





___ -->





<!-- # 21. Working with Time

???





___ -->





<!-- # 22. Importing Libaries from Package managers

???





___ -->





<!-- # 23. Bitwise Operators

???





___ -->





<!-- # 24. Common Data Structures

???





___ -->





<!-- # 25. Advanced Language Features

???





___ -->





# References

* [Markdown Cheatsheet](https://gist.github.com/jonschlinkert/5854601)
* [description](http://example.com)