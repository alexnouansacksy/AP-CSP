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


# 1. Compiling and Running

Alright so first you want to install GCC which you can do [here](https://www.youtube.com/watch?v=k6juv3mIr9o&t=83s&ab_channel=NickWalton) and install desired GCC version.

After that you go install Visual Studio Code.

After that you go to the extensions tab in your VS code and install "C/C++", "C/C++ Extension Pack", and "Code Runner."

After that you go to your Code Runner settings and turn on Run in Terminal and Save on Run.

After that you go create your "name".c program and change "name" to whatever you want, and then hit the run button.

Now your code compiles and runs!

# 2. Data Types
```cpp
// Integers represent whole numbers. It is formatted with %d.
int number = 0;
printf("%d", number);

// Doubles represent decimal numbers. It is formatted with %lf, or %(num)f with whatever you want to round to.
double dbl = 1.5;
printf("lf", dbl);

// Chars represent any specific character, from 0 to 255. It is formatted with %c.
char a = 'a';
printf("%c", a);


// Strings (C++) represent a set of words. It is formatted with %s.
// for strings you can use a char array, or you can just change your program to C++;
#include <stdio.h>
#include <iostream>
using namespace std; // make sure you have these three at the top of your program.

string abc = "I love to program in C and sometimes C++!";
printf("%s", abc);

// Booleans are True or False. They cannot be formatted, and instead I like to print strings.
#include <stdbool.h> // just make sure you have this at the top of your program.
bool isTrue = true;

if (isTrue) printf("That is true!");
else printf("That is not true!");

```
# 3. Console I/O
```c
// To take input from the console, you can first have to establish what type you want to take in, and then you can use the scanf() function.
int input;
scanf("%d", &input); // if taking in a number, make sure you put & in front of the variable name.
// After that, you type your input into the console and hit enter. If it is the incorrect type, it will crash!

// To output something to console, just use printf(), and make sure you format whatever you are printing correctly.
printf("Your number is %d", input);

// To take input from a file, go to the file called "takinginput.txt" and pray for the best.
```
# 4. Arithmetic Operations
```c
// We have some pretty basic operators in C.

// + for Addition
int a = 1 + 1;
a = 2

// - for Subtraction
int a = 1 - 1;
a = 0

// * for Multiplication
int a = 1 * 1;
a = 1

// / for Division (make sure you are dividing by at least one double if you are dividing decimals or fractions)
double a = 1 / (double) 2;
a = 0.5

// % for Mod (finding the remainder when diving)
int a = 100 % 33;
a = 1

// ++ to increase by 1
int a = 1;
a++;
a = 2

// -- to decrease by 1
int a = 1;
a -- ; 
1 = 0
```
# 5. Assignment Operations
```c
// To assign a variable, we just use =
int a = 1;

// To set a variable to itself PLUS something else, we use +=
int a = 1;
a += 1; // same as a = a + 1
a = 2

// To set a variable to itself MINUS something else, we use -=
int a = 1;
a -= 1; // same as a = a - 1
a = 0

// To set a variable to itself TIMES something else, we use *=
int a = 1;
a *= 1; // same as a = a * 1
a = 1

// To set a variable to itself DIVDED BY something else, we use /=
int a = 1;
a /= 1; // same as a = a / 1
a = 1

// To set a variable to itself MOD something else, we use %=
int a = 1;
a %= 1; // same as a = a % 1
a = 0
```
# 6. Comments
```c
// we can do single line comments like this

/*
and 
multi
line
comments
like 
this
*/
```
# 7. Decision Structures
```c
// In C, decision structures follow a if else structure similar to Java and other programming languages

bool conditionOne;
bool conditionTwo;

if (conditionOne) { // if we meet conditionOne we'll do this
  doThis();
  alsoDoThis();
} else if (conditionTwo) { // if we meet conditionTwo we'll do this
  doThisInstead();
  thenDoThis();
} else { // if we meet no conditions we'll do this
  fineDoThis();
  doThisToo();
}
```
# 8. Conditional Operators
```c
// Conditional Operators in C are also similar to other programming languages.

// >= to see if something is greater than or equal to something else
if (1 >= 1) doThis();

// > to see if something is greater than something else
if (2 > 1) doThis();

// <= to see if something is less than or equal to something else
if (1 <= 1) doThis();

// < to see if something is less than something else
if (1 < 2) doThis();

// == to see if two things are equal
if (1 == 1) doThis();

// != to see if two things are not equal
if (1 != 2) doThis();
```
# 9. Logic Operators
```C
// Similar to other languages, we have 3 logic operators

// &&: both conditions must be met
if (true && true) doThis();

// ||: one or both of conditions must be met 
if (true || !true) doThis();

// !: all conditions must be false 
if (!true) doThis(); 
```
# 10. Advanced Decision Structures
```c
// If we want to get fancy, or have a reptitive if statement, we can use switch as follows
int num = 0;

switch (num) { // so we are looking at num, or whatever we want to 
  case 0: printf("Your number is 0!"); // we compare the thing we established in our previous line to the case, in this case in 0
  break;
  case 1: printf("Your number is 1!"); // if our num or whatever we selected matches our case it'll do the thing and then break.
  break;
  case 2: printf("Your number is 2!");
  break;
  case 3: printf("Your number is 3!");
  break;
  case 4: printf("Your number is 4!");
  break;
  case 5: printf("Your number is 5!");
  break;
  case 6: printf("Your number is 6!");
  break;
  case 7: printf("Your number is 7!");
  break;
  case 8: printf("Your number is 8!");
  break;
  case 9: printf("Your number is 9!");
  break;
  case 10: printf("Your number is 10!");
  break;
}

```
# 11. String Methods
```c++
// Here is where we indulge a bit in C++
// These are all in C++, you can also use a Char array in C if you want to, but I cannot be bothered at the time. Maybe in College.
#include <stdio.h>
#include <iostream>
using namespace std; // make sure you have these three at the top of your program.

string a = "alsdfjlasdfj"; // declare a string

int length = a.size(); // length of string
int length = a.length(); // length of string

int substring = a.substr(0, 4); // takes a piece of the string, the first number is the index where it starts and the second number is where it ends
```
# 12. Random Generation
```c
// this code will show you how to generate a random number

// make sure you include these or else your program will break
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <unistd.h>

int main() {
  int upper = 10; // highest number
  int lower = 0; // lowest number
  int size = 10; // how many nums you want
  int nums[size]; // array with the nums

  for (int i = 0; i < size; i++) {
        srand(time(0)); 
        sleep(1);
        int random = (rand() % (upper - lower + 1)) + lower;
        nums[i] = random;
  }
}

```
# 13. Looping Structures
```c
// In C, there are two main kinds of loops. For-Loops and While-Loops;

// For-Loops will increment until your counter reaches desired number

for (int i = 0; i < 10; i++) { // this will repeat 10 times
  printf("%d\n", i);
}

// While-Loops will keep going until whatever condition you give it is met
int cnt = 0;
while (cnt < 10) { // this loop repeats 10 times
  printf("%d", cnt);
  cnt++;
}
```
# 14. Functions/Methods
```c
// In C, to make a method you just go to above your main method, and then define the data type it will return, "void" if nothing, and also anything that it will take in from when it is called inside the program. This is a simple length and width program using a method.

#include <stdio.h>

double area(int len, int wid) { // here we have an area function, taking in a length and a width
  return len * wid; // it returns a double, as specified above
}

double perimeter(int len, int wid) { // here we have a perimter function, taking in a length and a width
  return 2 * len + 2 * wid; // it returns a double, as specified above
}

int main() {
  int length = 2;
  int width = 2;
  double theArea = area(length, width); // here we have our call to the area function, and we must feed it two ints or it will break!
  double thePerimeter = perimeter(length, width); // here we have our call to the perimeter function, and we must feed it two ints or it will break!
}

```
# 15. Elementary Data Structures
```c
// In C, it is pretty cool, you can create you own data type, and then just make it hold whatever stuff you want it to hold.

typedef struct { // here we have an Alex data type, which holds the first name, last name, and age of Alex
    char firstName[4];
    char lastName[11];
    int age;
} Alex;

int main() { // here in our main class, we are creating the Alex object, and then assigning each one of its values.
  Alex anAlex; 
  anAlex.firstname = "Alex";
  anAlex.lastName = "Nouansacksy";
  anAlex.age = 17;
}

```
## 15.1 Arrays/Lists
```c
// Arrays in C are pretty much identical to arrays in other languages
// here's a simple program
#include <stdio.h>

int main() {
  int nums[10]; // here we are establishing an array that is 10 numbers long. since we did not assign anything yet, everything is set to 0;
  int nums[10] = {0, 0 , 0, 0, 0, 0, 0, 0, 0, 0}; // you can also make an array like this if you want to, and then just assign whatever values you want

  int nums[5] = 6; // here we are assigning a number in that array, you do this by putting the index that you want to change
  int num = nums[5];
  printf("%d", num); // this outputs 6, because calling soemthing from the array is the same idea as assigning something to that array

  for (int i = 0; i < sizeOf(nums); i++) { // this array will iterate through every number of nums, since we foujnd the size of it
    printf("%d\n", nums[i]);
  }


}
```
## 15.2 Matrices
```c
// matrices are just like 2-d arrays in any other languages, you just make an array of arrays
int rows = 10;
int cols = 20;
int nums[rows][cols]; // here, we are making a matrix with 10 rows and 20 columns, aka 10 int arrays with 20 values in each array!

// you can also make a 2-d array by hand but where's the fun in that
int nums[4][3] = { // here we have 4 rows and 3 columns, or 4 int arrays with 3 values each
  {1, 2, 3}, // here we are defining each array in the 2D array
  {4, 5, 6},
  {7, 8, 9},
  {10, 11, 12}
};

```

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