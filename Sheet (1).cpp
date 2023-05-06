#include <iostream>

int main() {
    int sum = 1000;

    for (int a = 1; a < sum; a++) {
        for (int b = a + 1; b < sum; b++) {
            int c = sum - a - b;
            if (a*a + b*b == c*c) {
                std::cout << a * b * c << std::endl;
                return 0;
            }
        }
    }

    std::cout << "No Pythagorean triplet found." << std::endl;
    return 0;
}
