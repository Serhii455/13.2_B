#include <iostream>

int gcd(int a, int b)
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

template<typename T>
T findGCD(T a, T b)
{
    return gcd(a, b);
}

template<typename T, typename... Args>
T findGCD(T a, T b, Args... args)
{
    return gcd(a, findGCD(b, args...));
}

// Макрос для обчислення НСД для довільної кількості чисел
#define CALCULATE_GCD(...) findGCD(__VA_ARGS__)

int main() {
    int count;
    std::cout << "Enter the number of values: ";
    std::cin >> count;

    if (count <= 0) {
        std::cout << "Invalid number of values." << std::endl;
        return 1;
    }

    int* numbers = new int[count];
    std::cout << "Enter " << count << " numbers: ";
    for (int i = 0; i < count; ++i) {
        std::cin >> numbers[i];
    }

    // Використовуємо CALCULATE_GCD для обчислення НСД введених чисел
    int result = CALCULATE_GCD(numbers[0], numbers[1], numbers[2], numbers[3]);
    std::cout << "GCD of the numbers: " << result << std::endl;

    delete[] numbers;

    return 0;
}
