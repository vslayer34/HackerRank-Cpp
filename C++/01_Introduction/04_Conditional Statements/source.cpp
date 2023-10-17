#include <iostream>


void printText(std::string text)
{
    std::cout << text << '\n';
}

int main()
{
    int number { 100 };
    while (number != 0)
    {
    std::cin >> number;

    if (number == 1)
        printText("one");
    else if (number == 2)
        printText("two");
    else if (number == 3)
        printText("three");
    else if (number == 4)
        printText("four");
    else if (number == 5)
        printText("five");
    else if (number == 6)
        printText("six");
    else if (number == 7)
        printText("seven");
    else if (number == 8)
        printText("eight");
    else if (number == 9)
        printText("nine");
    else
        printText("Greater than 9");
    }
}