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




}

// Find the smallest and the largest number in the Array
// Switch the largest with smallest number. Print the list
// Create a new random from 1 to 10 and insert it in the middle slot. Print the numbers.
// Add 10 to every number in the List. Print all.
// Replace the 3rd element in the array with 5 and print the number that was ousted (only use one method to complete this.)
// What numbers are in the 50s?
// What numbers are multiples of 4?
// Is there a 60 in the list?
// Check to see if all of the elements from front to back are in the same order from back to front
// How many numbers are greater than the average?
// How many of the numbers are even?
// Copy all of the elements of the array into a new array but in reverse order
// Write a program to shift every element of an array circularly right. E.g.-INPUT : 1 2 3 4 5 OUTPUT : 5 1 2 3 4
// Find the sum of all of the digits of all of the elements


