#include <iostream>


void displayArray(int array[], int arraySize)
{
    std::cout << "[ ";
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << array[i] << ((i != arraySize - 1) ? ", " : " ");
    }
    std::cout << "]";
}

void displayReservedArray(int array[], int arraySize)
{
    for (int i = arraySize - 1; i >= 0; i--)
    {
        std::cout << array[i] << " ";
    }
}

int main()
{
    // Print the integers of the array in the reverse order, space-separated on a single line.

    // Sample Input
    // 4
    // 1 4 3 2   


    // Sample Output
    // 2 3 4 1

    std::cout << "Please enter the array size: ";
    int arraySize { };
    std::cin >> arraySize;

    int array[arraySize];

    std::cout << "Please enter the array element seprated by space: ";

    for (int i = 0; i < arraySize; i++)
    {
        std::cin >> array[i];
    }

    displayReservedArray(array, arraySize);
}