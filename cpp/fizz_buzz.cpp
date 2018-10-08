// Program that implements the Fizz Buzz algorithm

#include <iostream>

// function prototype
void fizz_buzz(int);

// starts program execution
int main() {
    fizz_buzz(15);

    return 0;
}

void fizz_buzz(int n) {
    for (auto i = 1; i <= n; i++) {
        if ((i % 3 == 0) && (i % 5 == 0)) { 
            std::cout << "fizz buzz\n"; 
        } else if (i % 5 == 0) {
            std::cout << "buzz\n";
        } else if (i % 3 == 0) {
            std::cout << "fizz\n";
        } else {
            std::cout << i << "\n";
        }
    }
}

