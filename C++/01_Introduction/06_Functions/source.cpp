#include <iostream>


int max_of_four(int a, int b, int c, int d)
{
    // temp1 and temp2 to save the comparision betweem two arguments
    int temp1, temp2;

    temp1 = (a > b) ? a : b;
    temp2 = (c > d) ? c : d;

    return (temp1 > temp2) ? temp1 : temp2;
}

int main()
{
    int a, b, c, d;

    std::cin >> a >> b >> c >> d;

    std::cout << max_of_four(a, b, c, d) << '\n';
}