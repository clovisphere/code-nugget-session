// Factorial algorithm in C++

#include <iostream>
#include <limits>

// function prototype
int f(int);

// starts program execution
int main() {
    /*
     To get min/max value for a given data type

     std::cout << "INT limit - MIN: " << std::numeric_limits<int>::min() << " | Max: "
        << std::numeric_limits<int>::max() << "\n";
    */
    
    int number;

    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    printf("\n%d! = %d\n", number, f(number));

    return 0;
}

// calculates the factorial of the non-negatative integer n
int f(int n) {
    if (n < 0) { return 0; } // deals with negative integers.
    if (n == 0) { return 1; }
    return n * f(n - 1); 
}
