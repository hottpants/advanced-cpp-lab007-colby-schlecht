#include "project/recursive_algorithms.h"

#include <iostream>
#include <stdexcept>
#include <utility>
#include <vector>

// TODO: Implement factorial recursively.
// Base case: n == 0 or n == 1.
// Recursive case: n * factorial(n - 1).
// Time complexity: O(n)
int factorial(int n) {
    if(n < 0) { throw std::logic_error("Error: Please input a non-negative number"); }
    else {
        if(n == 0) { return 1; }
        else return n * factorial(n-1);
    }
}

// TODO: Implement an iterative factorial comparison.
int factorialIterative(int n) {
    if(n < 0) { throw std::logic_error("Error: Please input a non-negative number"); }
    else {
        int total = 1;
        while (n > 0) {
            total *= n;
            n-=1;
        }
        return total;
    }
}

// TODO: Implement fibonacci recursively.
// Base case: fib(0) = 0, fib(1) = 1.
// Recursive case: fib(n) = fib(n - 1) + fib(n - 2).
int fibonacci(int n) {
    if(n < 0) { throw std::logic_error("Error: Please input a non-negative number"); }
    if(n <= 1) { return (n); }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

// TODO: Implement iterative fibonacci comparison.
int fibonacciIterative(int n) {
    if(n < 0) { throw std::logic_error("Error: Please input a non-negative number"); }
    int current = 0;
    int prev = 1;
    int temp = 0;
    for(int i = 0; i < n; i++) {
        temp = current;
        current += prev; 
        prev = temp;
    }
    return current;
}

// TODO: Implement recursive binary search on a sorted array.
// Base case: target not found or left > right.
// Recursive case: compare middle element and recurse on the appropriate half.
int binarySearch(const std::vector<int>& array, int target) {
    int mid = array.size()/2;
    int start = 0;
    int end = array.size()-1;
    if(array.at(mid) == target) { return mid; }
    
    
    if(array.at(mid) > target) { 
        end = mid - 1;
        if(start > end) { return -1; }
        std::vector<int> temp_arr(array.begin() + start, array.begin() + end);
        return binarySearch(temp_arr, target);
    }
    else {
        start = mid + 1;
        if(start > end) { return -1; }
        std::vector<int> temp_arr(array.begin() + start, array.begin() + end);
        return binarySearch(temp_arr, target);
    }

    
    return(array)
}

// TODO: Implement iterative binary search comparison.
int binarySearchIterative(const std::vector<int>& array, int target) {

}

// TODO: Implement recursive array sum.
// Base case: empty array.
// Recursive case: first element + arraySum(rest-of-array).
int arraySum(const std::vector<int>& array) {
    (void)array;
    throw std::logic_error("Student implementation required: arraySum");
}

// TODO: Implement iterative array sum comparison.
int arraySumIterative(const std::vector<int>& array) {
    (void)array;
    throw std::logic_error("Student implementation required: arraySumIterative");
}

// TODO: Implement recursive in-place reversal.
// Base case: size <= 1.
// Recursive case: swap first and last elements, then recurse on the remaining middle.
void reverseArray(std::vector<int>& array) {
    (void)array;
    throw std::logic_error("Student implementation required: reverseArray");
}

// TODO: Implement iterative reverse comparison.
void reverseArrayIterative(std::vector<int>& array) {
    (void)array;
    throw std::logic_error("Student implementation required: reverseArrayIterative");
}
