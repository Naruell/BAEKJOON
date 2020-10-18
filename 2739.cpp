// 2739 구구단
#include <iostream>

int main()
{
    std::cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);

    int dan;
    std::cin >> dan;

    const int start = 1;
    const int end = 9;

    int i;
    for(i = start; i <= end; ++i)
    {
        std::cout << dan << " * " << i << " = " << dan * i << '\n';
    }

    return 0;
}