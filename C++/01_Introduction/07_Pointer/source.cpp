#include <iostream>

void update(int& num1, int& num2)
{
    int temp = num1;
    num1 += num2;
    num2 = std::abs(temp - num2);
}

int main()
{
    std::cout << "Insert the two numbers: ";
    int num1 { };
    std::cin >> num1;

    int num2 { };
    std::cin >> num2;

    update(num1, num2);

    std::cout << num1 << '\n' << num2 << '\n';
}