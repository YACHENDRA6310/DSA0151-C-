#include <iostream>
#include <unordered_set>

int squareSum(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    std::unordered_set<int> seen;
    while (n != 1 && seen.find(n) == seen.end()) {
        seen.insert(n);
        n = squareSum(n);
    }
    return n == 1;
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isHappy(number)) {
        std::cout << number << " is a Happy number." << std::endl;
    } else {
        std::cout << number << " is not a Happy number." << std::endl;
    }

    return 0;
}
