// 2438 별 찍기 - 1
#include <iostream>
#include <iomanip>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int lineAmount;
    int num1, num2;
    int i;
    std::cin >> lineAmount;

    std::cout << std::setfill('*');

    for(i = 0; i < lineAmount; ++i)
    {
        // +2 because i starts from 0, and print '\n'.
        std::cout << std::setw(i + 2) << '\n';
    }

    return 0;
}