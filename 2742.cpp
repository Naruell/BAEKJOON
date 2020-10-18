// 2742 기찍 N
#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int printNumberFrom;
    std::cin >> printNumberFrom;

    printNumberFrom++;
    while(printNumberFrom-- > 1)
    {
        std::cout << printNumberFrom << '\n';
    }

    return 0;
}