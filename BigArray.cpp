// Alex Nouansacksy
// Prog505a
// 10/12/2023
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <unistd.h>


int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int nums[size];
    int upper = 90;
    int lower = 20;
    

    for (int i = 0; i < size; i++) {
        srand(time(0)); 
        sleep(1);
        int random = (rand() % (upper - lower + 1)) + lower;
        nums[i] = random;

    }

    // Print the Array from the beginning to the end
    printf("\n1. Print the Array from the beginning to the end.");
    printf("\n");;
    for (int i = 0; i < size; i++) {printf("%d ", nums[i]);}
    printf("\n");;


    // Print the Array from the beginning to the end using a for-each loop
    printf("\n2. Print the Array from the beginning to the end using a for-each loop.");
    printf("\n");
    for (int i: nums) {printf("%d ", i);}
    printf("\n");

    // What number is in the middle of the Array?
    printf("\n3. What number is in the middle of the Array?");
    printf("\n");

    int middle = nums[size / 2];
    printf("%d", middle);
    printf("\n");

    // What is the average of the first, last and middle numbers?
    printf("\n4. What is the average of the first, last and middle numbers?");
    printf("\n");

    int first = nums[0];
    int last = nums[size-1];
    double average = (first + middle + last);
    average /= (double) 3;
    printf("%.2f", average);
    printf("\n");

    // Find the smallest and the largest number in the Array
    int smallest = nums[0];
    int largest = nums[0];
    for (int i = 0; i < size; i++) {
        if (nums[i] < largest) largest = nums[i];
        if (nums[i] > smallest) smallest = nums[i];
    }
    printf("\n5. Find the smallest and the largest number in the Array");
    printf("\nLargest : %d\tsmallest : %d", largest, smallest);

    printf("\n");

    // Switch the largest with smallest number. Print the list
    int smallestLoc = 0;
    int largestLoc = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] == largest) largestLoc = i;
        if (nums[i] == smallest) smallestLoc = i;
    }
    nums[largestLoc] = smallest;
    nums[smallestLoc] = largest;
    printf("\n6. Switch the largest with smallest number. Print the list");
    printf("\n");
    for (int i = 0; i < size; i++) {printf("%d ", nums[i]);}
    printf("\n");

    // Create a new random from 1 to 10 and insert it in the middle slot. Print the numbers.
    upper = 10;
    lower = 1;
    int random = (rand() % (upper - lower + 1)) + lower;
    nums[size/2] = random;
    printf("\n7. Create a new random from 1 to 10 and insert it in the middle slot. Print the number.");
    printf("\nInserted the number: %d", random);
    printf("\n");
    for (int i = 0; i < size; i++) {printf("%d ", nums[i]);}
    printf("\n");

    // Add 10 to every number in the List. Print all
    printf("\n8. Add 10 to every number in the List. Print all");
    printf("\n");
    for (int i = 0; i < size; i++) {
        nums[i] += 10;
        printf("%d ", nums[i]);
        }
    printf("\n");

    // Replace the 3rd element in the array with 5 and print the number that was ousted (only use one method to complete this.)
    printf("\n9. Replace the 3rd element in the array with 5 and print the number that was ousted (only use one method to complete this.)");
    int temp = nums[2];
    nums[2] = 5;
    printf("\nReplaced %d with a 5.",  temp);
    printf("\n");

    // What numbers are in the 50s?
    printf("\n10.  What numbers are in the 50s?");
    int fifties = 0;
    for (int i = 0; i < size; i++) if (nums[i] >= 50 && nums[i] <= 59) fifties++;
    printf("\nThere are %d numbers in the fifties.", fifties);
    printf("\n");

    // What numbers are multiples of 4?
    printf("\n11. What numbers are multiples of 4?");
    printf("\n");
    for (int i = 0; i < size; i++) if (nums[i] % 4 == 0) printf("%d ", nums[i]);
    printf("\n");

    // Is there a 60 in the list?
    printf("\n12. Is there a 60 in the list?");
    bool sixty = false;
    for (int i = 0; i < size; i++) if(nums[i] == 60) sixty = true;
    if (sixty) printf("\nYes.");
    else printf("\nNo.");
    printf("\n");

    // Check to see if all of the elements from front to back are in the same order from back to front
    printf("\n13. Check to see if all of the elements from front to back are in the same order from back to front");
    bool same = true;
    for (int i = 0; i < size; i++ ) 
        if(nums[i] != nums[size - 1 - i]) same = false;
    if (same) printf("\nYes.");
    else printf("\nNo.");
    printf("\n");

    // How many numbers are greater than the average?
    printf("\n14. How many numbers are greater than the average?");
    average = 0;
    for (int x : nums) average += x;
    average /= size;
    int aboveAvg = 0;
    for (int i = 0; i < size; i++) if (nums[i] > average) aboveAvg++;
    printf("\n%d", aboveAvg);
    printf("\n");

    // How many of the numbers are even?
    printf("\n15. How many of the numbers are even?");
    printf("\n");
    int evens = 0;
    for (int i = 0; i < size; i++) if (nums[i] % 2 == 0) evens++;
    printf("%d", evens);
    printf("\n");

    // Copy all of the elements of the array into a new array but in reverse order
    printf("\n16. Copy all of the elements of the array into a new array but in reverse order");
    int reverse[size];
    for (int i = 0; i < size;i++) reverse[size - 1 - i] = nums[i];
    printf("\n");
    for (int x : reverse) printf("%d ", x);
    printf("\n");

    // Write a program to shift every element of an array circularly right. E.g.-INPUT : 1 2 3 4 5 OUTPUT : 5 1 2 3 4
    printf("\n17. Write a program to shift every element of an array circularly right. E.g.-INPUT : 1 2 3 4 5 OUTPUT : 5 1 2 3 4");
    printf("\n");

    temp = nums[size-1];
    for (int i = size-2; i >= 0; i--) nums[i+1] = nums[i];
    nums[0] = temp;
    for (int x : nums) printf("%d ", x);
    printf("\n");

    // Find the sum of all of the digits of all of the elements
    printf("\n18. Find the sum of all of the digits of all of the elements");
    int tot = 0;
    for (int i = 0; i < size; i ++) {
        tot += nums[i] / 10;
        tot += nums[i] % 10;
    }
    printf("\n%d", tot);

}
/*
PS C:\Users\alexn\Desktop\AP-CSP> cd "c:\Users\alexn\Desktop\AP-CSP\" ; if ($?) { g++ BigArray.cpp -o BigArray } ; if ($?) { .\BigArray }
Enter array size: 19

1. Print the Array from the beginning to the end.
87 90 22 26 29 32 35 39 42 45 48 52 55 58 62 65 68 71 75 

2. Print the Array from the beginning to the end using a for-each loop.
87 90 22 26 29 32 35 39 42 45 48 52 55 58 62 65 68 71 75 

3. What number is in the middle of the Array?
45

4. What is the average of the first, last and middle numbers?
69.00

5. Find the smallest and the largest number in the Array
Largest : 22    smallest : 90

6. Switch the largest with smallest number. Print the list
87 22 90 26 29 32 35 39 42 45 48 52 55 58 62 65 68 71 75

7. Create a new random from 1 to 10 and insert it in the middle slot. Print the number.
87 22 90 26 29 32 35 39 42 6 48 52 55 58 62 65 68 71 75

8. Add 10 to every number in the List. Print all
97 32 100 36 39 42 45 49 52 16 58 62 65 68 72 75 78 81 85

9. Replace the 3rd element in the array with 5 and print the number that was ousted (only use one method to complete this.)
Replaced 100 with a 5.

10.  What numbers are in the 50s?
There are 2 numbers in the fifties.

11. What numbers are multiples of 4?
32 36 52 16 68 72

12. Is there a 60 in the list?
No.

13. Check to see if all of the elements from front to back are in the same order from back to front
No.

14. How many numbers are greater than the average?
10

15. How many of the numbers are even?
10

16. Copy all of the elements of the array into a new array but in reverse order
85 81 78 75 72 68 65 62 58 16 52 49 45 42 39 36 5 32 97

17. Write a program to shift every element of an array circularly right. E.g.-INPUT : 1 2 3 4 5 OUTPUT : 5 1 2 3 4
85 32 32 5 36 39 42 45 49 52 16 58 62 65 68 72 75 78 81

18. Find the sum of all of the digits of all of the elements
182
PS C:\Users\alexn\Desktop\AP-CSP> cd "c:\Users\alexn\Desktop\AP-CSP\" ; if ($?) { g++ BigArray.cpp -o BigArray } ; if ($?) { .\BigArray }
Enter array size: 19

1. Print the Array from the beginning to the end.
51 54 58 61 64 67 71 74 77 80 84 87 90 22 26 29 32 35 39

2. Print the Array from the beginning to the end using a for-each loop.
51 54 58 61 64 67 71 74 77 80 84 87 90 22 26 29 32 35 39

3. What number is in the middle of the Array?
80

4. What is the average of the first, last and middle numbers?
56.67

5. Find the smallest and the largest number in the Array
Largest : 22    smallest : 90

6. Switch the largest with smallest number. Print the list
51 54 58 61 64 67 71 74 77 80 84 87 22 90 26 29 32 35 39

7. Create a new random from 1 to 10 and insert it in the middle slot. Print the number.
Inserted the number: 5
51 54 58 61 64 67 71 74 77 5 84 87 22 90 26 29 32 35 39

8. Add 10 to every number in the List. Print all
61 64 68 71 74 77 81 84 87 15 94 97 32 100 36 39 42 45 49

9. Replace the 3rd element in the array with 5 and print the number that was ousted (only use one method to complete this.)
Replaced 68 with a 5.

10.  What numbers are in the 50s?
There are 0 numbers in the fifties.

11. What numbers are multiples of 4?
64 84 32 100 36

12. Is there a 60 in the list?
No.

13. Check to see if all of the elements from front to back are in the same order from back to front
No.

14. How many numbers are greater than the average?
11

15. How many of the numbers are even?
8

16. Copy all of the elements of the array into a new array but in reverse order
49 45 42 39 36 100 32 97 94 15 87 84 81 77 74 71 5 64 61

17. Write a program to shift every element of an array circularly right. E.g.-INPUT : 1 2 3 4 5 OUTPUT : 5 1 2 3 4
49 61 64 5 71 74 77 81 84 87 15 94 97 32 100 36 39 42 45

18. Find the sum of all of the digits of all of the elements
190
*/






