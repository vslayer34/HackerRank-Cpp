#include <iostream>


void printText(std::string text)
{
    std::cout << text << '\n';
}


void setTextPerNumber(int number)
{
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
    else if (number % 2 == 0)
        printText("even");
    else
        printText("odd");
}

int main()
{
    int startingNumber { };
    int endingNumber { };

    std::cin >> startingNumber >> endingNumber;

    for (int i = startingNumber; i <= endingNumber; i++)
    {
        setTextPerNumber(i);
    }
}