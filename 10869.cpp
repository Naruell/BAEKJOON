#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout.precision(10);
    std::cout << num1 + num2 << '\n';
    std::cout << num1 - num2 << '\n';
    std::cout << num1 * num2 << '\n';
    std::cout << num1 / num2 << '\n';
    std::cout << num1 % num2 << '\n';
    return 0;
}