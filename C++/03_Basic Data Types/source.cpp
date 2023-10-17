#include <iostream>
#include <iomanip>


int main()
{
    int intValue { };
    long longValue { };
    char charValue { };
    float floatValue { };
    double doubleValue { };

    std::cout.precision(3);
    
    std::cin >> intValue >> longValue >> charValue >> floatValue >> doubleValue;

    std::cout << intValue << '\n';
    std::cout << longValue << '\n';
    std::cout << charValue << '\n';
    std::cout << std::fixed << std::setprecision(3) << floatValue << '\n';
    std::cout << std::fixed << std::setprecision(9) << doubleValue << '\n';
}