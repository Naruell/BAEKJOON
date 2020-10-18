// 2741 N 찍기
#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int printNumberTo;
    std::cin >> printNumberTo;
    int i = 0;

    while(i++ < printNumberTo)
    {
        std::cout << i << '\n';
    }

    return 0;
}