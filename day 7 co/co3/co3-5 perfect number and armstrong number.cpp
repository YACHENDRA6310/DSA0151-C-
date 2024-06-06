#include <iostream>
#include <cmath>

using namespace std;

class Number {
private:
    int num;

public:
    Number(int n) : num(n) {}

    bool isPerfect() {
        int sum = 1; 

        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0) {
                if (i == num / i)
                    sum += i;
                else
                    sum += (i + num / i);
            }
        }

        return (sum == num);
    }

    bool isArmstrong() {
        int temp = num;
        int sum = 0;
        int digits = 0;

        while (temp != 0) {
            temp /= 10;
            digits++;
        }

        temp = num;

        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        return (sum == num);
    }
};

int main() {
    Number num1(28);
    if (num1.isPerfect()) {
        cout << "28 is a Perfect Number." << endl;
    } else {
        cout << "28 is not a Perfect Number." << endl;
    }
    Number num2(153);
    if (num2.isArmstrong()) {
        cout << "153 is an Armstrong Number." << endl;
    } else {
        cout << "153 is not an Armstrong Number." << endl;
    }

    return 0;
}
