// 나머지
#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;

    std::cout << (num1 + num2) % num3 << '\n';
    std::cout << ((num1 % num3) + (num2 % num3)) % num3 << '\n';
    std::cout << (num1 * num2) % num3 << '\n';
    std::cout << ((num1 % num3) * (num2 % num3)) % num3 << '\n';
}