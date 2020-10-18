// 8393 합
#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int addNumberTo;
    std::cin >> addNumberTo;

    std::cout << ((1 + addNumberTo) * addNumberTo) / 2;

    return 0;
}