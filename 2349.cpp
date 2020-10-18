// 2439 별 찍기 - 2
#include <iostream>
#include <iomanip>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int lineAmount;
    int i, j;
    std::cin >> lineAmount;

    for(i = 0; i < lineAmount; ++i)
    {
        std::cout << std::setw(lineAmount - i);
        for(j = 0; j < (i + 1); ++j)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    return 0;
}